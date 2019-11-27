#include "defines.h"
#include "kozos.h"
#include "interrupt.h"
#include "lib.h"

kz_thread_id_t test09_1_id;
kz_thread_id_t test09_2_id;
kz_thread_id_t test09_3_id;

/*システムタスクとユーザースレッドの起動*/
static int start_threads(int argc,char* argv[])
{
    test09_1_id = kz_run(test09_1_main,"test09_1",1,0x100,0,NULL);
    test09_2_id = kz_run(test09_2_main,"test09_2",2,0x100,0,NULL);
    test09_3_id = kz_run(test09_3_main,"test09_3",3,0x100,0,NULL);

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

