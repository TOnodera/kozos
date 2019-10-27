#include "defines.h"
#include "interrupt.h"
#include "serial.h"
#include "xmodem.h"
#include "elf.h"
#include "lib.h"

int global_data = 0x10;
int global_bss;
static int static_data = 0x20;
static int static_bss;

static void printval(void)
{
    puts("global_data = ");putxval(global_data,0);putc('\n');
    puts("global_bss = ");putxval(global_bss,0);putc('\n');
    puts("static_data = ");putxval(static_data,0);putc('\n');
    puts("static_bss = ");putxval(static_bss,0);putc('\n');
}

static int init(void)
{
    extern int erodata,data_start,edata,bss_start,ebss;

    memcpy(&data_start,&erodata,(long)&edata - (long)&data_start);
    memset(&bss_start,0,(long)&ebss-(long)&bss_start);

    /*ソフトウェア割り込みベクタを初期化する*/
    softvec_init();

    serial_init(SERIAL_DEFAULT_DEVICE);

    return 0;
}

/*メモリの１６進数ダンプ出力*/
static int dump(char* buf,long size)
{
    long i;
    
    if(size < 0)
    {
        puts("no data \n");
        return -1;
    }

    for(i = 0; i < size; i++)
    {
        putxval(buf[i],2);
        if((i & 0xf) == 15)
        {
            putc('\n');
        }else{
            if((i & 0xf) == 7) {
                puts(" ");
            }
            puts(" ");
        }
    }
    putc('\n');

    return 0;
}

static void wait()
{
    volatile long i;
    for( i = 0; i < 300000; i++){}
}

int main(void)
{

    static char buf[16];
    static long size = -1;
    static unsigned char* loadbuf = NULL;
    extern int buffer_start;
    char* entry_point;
    void (*f)(void);

    /*最初の初期化処理は割り込み無効の状態で行う*/
    INTR_DISABLE;

    init();

    puts("kzload (kozos boot loader) started.\n");

    while(1)
    {
        puts("kzload> ");
        gets(buf);

        if(!strcmp(buf,"load"))
        /*XMODEMでファイルのダウンロード*/
        {
            loadbuf = (char*)(&buffer_start);
            size = xmodem_recv(loadbuf);
            wait();

            if(size<0)
            {
                puts("\nXMODEM receive error!\n");
            }else{
                puts("\nXMODEM receive succeeded.\n");
            }

        }else if(!strcmp(buf,"dump")){
            puts("size: ");
            putxval(size,0);
            putc('\n');
            dump(loadbuf,size);
        }else if(!strcmp(buf,"run")){
            entry_point=elf_load(loadbuf);
            if(!entry_point){
                puts("run error\n");
            }else{
                puts("starting from entry point: ");
                putxval((unsigned long)entry_point,0);
                putc('\n');
                f = (void (*)(void))entry_point;
                f();/*ここで、ロードしたプログラムに処理を渡す*/
                /*ここには返ってこない*/
            }
        }else{
            puts("unknown.\n");
        }
    }

    return 0;
   
}
