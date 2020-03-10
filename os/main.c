#include "defines.h"
#include "kozos.h"
#include "interrupt.h"
#include "lib.h"

/*システムタスクとユーザースレッドの起動*/
static int start_threads(int argc,char* argv[])
{
    kz_run(test10_1_main,"test10_1",1,0x100,0,NULL);

    kz_chpri(15);/*初期スレッドの優先順位を最低にする*/
    INTR_ENEBLE;/*割り込みを有効化*/
    while (1)
    {
        asm volatile("sleep");
    }
    
    return 0;
}

int main(void)
{
    INTR_DISABLE; /*割り込みを無効にする*/

    puts("kozos boot succeeded\n");

    /*OSの動作開始*/
    kz_start(start_threads,"idle",0,0x100,0,NULL);
    /*ここには返ってこない*/

    return 0;
}

