#include "defines.h"
#include "kozos.h"
#include "intr.h"
#include "interrupt.h"
#include "syscall.h"
#include "lib.h"

#define THREAD_NUM 6
#define THREAD_NAME_SIZE 15

typedef struct _kz_context{
    uint32 sp;
}kz_context;

/* タスクコントロールブロック */
typedef struct _kz_thread{
    struct _kz_thread* next; /*レディーキューの接続に使用するnextポインタ*/
    char name[THREAD_NAME_SIZE + 1];/*スレッド名*/
    char* stack; /*スレッドのスタック*/

    struct{
        kz_func_t func;/*スレッドのメイン関数*/
        int argc; /*スレッドのメイン関数に渡すargc*/
        char** argv; /*スレッドのメイン関数に渡すargv*/
    }init;

    struct{
        kz_syscall_type_t type;
        kz_syscall_param_t* param;
    }syscall;

    kz_context context;
}kz_thread;

/*スレッドのレディーキュー*/
static struct{
    kz_thread* head; /*レディーキューの先頭エントリ*/
    kz_thread* tail; /*レディーキューの末尾のエントリ*/
}readyque;

static kz_thread* current; /*カレント・スレッド*/
static kz_thread threads[THREAD_NUM]; /*タスクコントロールブロック*/
static kz_handler_t handlers[SOFTVEC_TYPE_NUM]; /*割り込みハンドラ*/

void dispatch(kz_context* context);/*スレッドのディスパッチ用関数*/

/*カレントレッドをレディーキューから抜き出す*/
static int getcurrent(void)
{
    if(current == NULL)
    {
        return -1;
    }

    /*カレントスレッドは必ず先頭にあるはずなので先頭から抜き出す*/
    readyque.head = current->next;
    if(readyque.head == NULL)
    {
        readyque.tail = NULL;
    }
    current->next = NULL;

    return 0;
}

/*カレントスレッドをレディーキューにつなげる*/
static int putcurrent(void)
{
    if(current == NULL)
    {
        return -1;
    }

    /*レディーキューの末尾に接続する*/
    if(readyque.tail){
        readyque.tail->next = current;
    }else{
        readyque.head = current;
    }
    readyque.tail = current;

    return 0;
}

/*スレッドの終了*/
static void  thread_end(void)
{
    kz_exit();
}

/*スレッドのスタートアップ*/
static void thread_init(kz_thread* thp)
{
    /*スレッドのメイン関数を呼び出す*/
    thp->init.func(thp->init.argc,thp->init.argv); /*スレッドのメイン関数を呼び出して動作を開始する*/
    thread_end();/*メイン関数から戻ってきたら動作を終了する*/
}

/*システムコール処理*/
static kz_thread_id_t thread_run(kz_func_t func,char* name,int stacksize,
                                int argc,char* argv[])
{
    int i;
    kz_thread* thp;
    uint32* sp;
    extern char userstack;
    static char* thread_stack = &userstack;

    /*開いているスタックコントロールブロックを検索*/
    for(i = 0;i < THREAD_NUM;i++)
    {
        thp = &threads[i];
        if(!thp->init.func){break;}/*見つかったらbreak*/
    }
    /*見つからなかったら終了*/
    if(i == THREAD_NAME_SIZE){return -1;}

    memset(thp,0,sizeof(*thp));/*TCBを0クリア*/

    /*タスクコントロールブロックの設定*/
    strcpy(thp->name,name);
    thp->next = NULL;
    thp->init.func = func;
    thp->init.argc = argc;
    thp->init.argv = argv;

    /*スタック領域を確保*/
    memset(thread_stack,0,stacksize);
    thread_stack += stacksize;
    thp->stack  = thread_stack; /*下方伸長なので１行上のコードでstacksize分すでに確保出来ている*/

    /*スタックの初期化*/
    sp = (uint32*)thp->stack;
    *(--sp) = (uint32)thread_end;

    /*プログラムカウンタを設定する*/
    *(--sp) = (uint32)thread_init;/*ER7*/
    *(--sp) = 0; /*ER6*/
    *(--sp) = 0; /*ER5*/
    *(--sp) = 0; /*ER4*/
    *(--sp) = 0; /*ER3*/
    *(--sp) = 0; /*ER2*/
    *(--sp) = 0; /*ER1*/

    /*スレッドのスタートアップに渡す引数*/
    *(--sp) = (uint32)thp; /*ER0*/

    /*スレッドのコンテキストを設定*/
    thp->context.sp = (uint32)sp; /*コンテキストとしてスタックポインタを設定*/

    /*システムコールを呼び出したスレッドをレディーキューに戻す*/
    putcurrent();

    /*新規作成したスレッドを、レディーキューに接続する*/
    current = thp;
    putcurrent();

    return (kz_thread_id_t)current;

}

/*システムコールの処理*/
static int thread_exit(void)
{
    puts(current->name);
    puts("EXIT.\n");
    memset(current,0,sizeof(*current));

    return 0;
}

static int setintr(softvec_type_t type,kz_handler_t handler)
{
    static void thread_intr(softvec_type_t type,unsigned long sp);

    /**
     *割り込みを受け付けるために、ソフトウェア割り込みベクタに 
     * OSの割り込み処理の入り口となる関数を登録する。
     */
    softvec_setintr(type,thread_intr);

    handlers[type] = handler;

    return 0;
}

/*システムコールの処理関数の呼び出し*/
static void call_functions(kz_syscall_type_t type,kz_syscall_param_t* p)
{
    switch (type)
    {
    case KZ_SYSCALL_TYPE_RUN:
        p->un.run.ret = thread_run(p->un.run.func,p->un.run.name,
                                    p->un.run.stacksize,
                                    p->un.run.argc,p->un.run.argv);
        break;
    case KZ_SYSCALL_TYPE_EXIT:
        thread_exit();
        break;
    default:
        break;
    }
}

static void syscall_proc(kz_syscall_type_t type,kz_syscall_param_t* p)
{
    /**
     * システムコールを呼び出したスレッドをレディーキューから
     * 外した状態で処理関数を呼び出す。このためシステムコールを
     * 呼び出したスレッドをそのまま動作継続させたい場合は
     * 処理関数の内部でputcurrent()を呼び出す必要がある。
     */
    getcurrent();
    call_functions(type,p);
}

static void schedule(void)
{
    if(!readyque.head)
    {
        kz_sysdown();/*レディーキューが見つからなかったらdown*/
    }

    current = readyque.head;/*レディーキューの先頭をカレントスレッドにする*/
}

static void syscall_intr(void)
{
    syscall_proc(current->syscall.type,current->syscall.param);
}

static void softerr_intr(void)
{
    puts(current->name);
    puts("DOWN.\n");

    getcurrent();/*レディーキューから外す*/
    thread_exit();/*スレッドを終了する*/

}

/*割り込み処理の入り口関数*/
static void thread_intr(softvec_type_t type,unsigned long sp)
{
    /*カレントスレッドのコンテキストを保存*/
    current->context.sp = sp;

    /**
     * 割り込みごとの処理を実行する。
     * syscall_intr(),softerr_intr()がハンドラに登録されているので、
     * それらが実行される。
     */
    if(handlers[type])
    {
        handlers[type]();
    }

    schedule();/*スケジューリング*/

    /**
     * スレッドのディスパッチ
     * dispatch()の本体はstartup.sにある
     */
    dispatch(&current->context);/*スケジューリングされたスレッドをディスパッチ*/
}

void kz_start(kz_func_t func,char* name,int stacksize,
                int argc,char* argv[])
{
    /**
     * 以降で呼び出すスレッド関連のライブラリ関数の内部でcurrentを
     * 見ている場合があるので、currentをNULLにしておく
     */
    current = NULL;
    readyque.head = readyque.tail = NULL;

    memset(threads,0,sizeof(threads));
    memset(handlers,0,sizeof(handlers));

    /*割り込みハンドラの登録*/
    setintr(SOFTVEC_TYPE_SYSCALL,syscall_intr);/*システムコール*/
    setintr(SOFTVEC_TYPE_SOFTERR,softerr_intr);/*ダウン要因*/

    current = (kz_thread*)thread_run(func,name,stacksize,argc,argv);/*初期スレッドを生成*/

    /*最初のスレッドを起動*/
    dispatch(&current->context);

    /*ここには返ってこない*/
}

void kz_sysdown(void)
{
    puts("system error.\n");
    while(1)
        ;
}

/*システムコールの呼び出し用ライブラリ関数*/
void kz_syscall(kz_syscall_type_t type,kz_syscall_param_t* param)
{
    current->syscall.type = type;
    current->syscall.param = param;
    asm volatile ("trapa #0");/*トラップ割り込み(ソフトウェア割り込み)を発生させる*/
}

