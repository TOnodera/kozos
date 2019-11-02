#include "defines.h"
#include "intr.h"
#include "interrupt.h"
#include "serial.h"
#include "lib.h"

static void intr(softvec_type_t type,unsigned long sp)
{
    int c;
    static char buf[32];
    static int len;

    c = getc();/*受信割り込みが入ったので位置文字受信する*/

    if(c!='\n'){
        buf[len++] = c;
    }else{
        buf[len++] = '\0';
        if(!strncmp(buf,"echo",4)){
            puts(buf + 4);
            putc('\n');
        }else{
            puts("unknown.\n");
        }
        puts("> ");
        len = 0;
    }
}

int main(void)
{
    INTR_DISABLE; /*割り込みを無効化する*/

    puts("kozos boot succeed!\n");

    softvec_setintr(SOFTVEC_TYPE_SERINTR,intr);
    serial_intr_recv_enable(SERIAL_DEFAULT_DEVICE);

    puts("> ");

    INTR_ENEBLE; /*割り込みを有効化する*/

    while(1)
    {
        asm volatile ("sleep"); /*省電力モードに移行*/
    }

    return 0;
}

