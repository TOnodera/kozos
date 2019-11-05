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
    *(--sp) = (uint32)thread_init;
    *(--sp) = 0; /*ER6*/
    *(--sp) = 0; /*ER5*/
    *(--sp) = 0; /*ER4*/
    *(--sp) = 0; /*ER3*/
    *(--sp) = 0; /*ER2*/
    *(--sp) = 0; /*ER1*/

    /*スレッドのスタートアップに渡す引数*/
    *(--sp) = (uint32)thp; /*ER0*/

    /*スレッドのコンテキストを設定*/
    *(--sp) = (uint32)sp; /*コンテキストとしてスタックポインタを設定*/

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