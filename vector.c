#include "defines.h"

extern void start(void);
extern void intr_softerr(void);/*ソフトウェアエラー*/
extern void intr_syscall(void);/*システムコールで利用する*/
extern void intr_serintr(void);/*シリアル割り込み*/

void (*vectors[])(void) = 
{
    start,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
    intr_syscall,intr_softerr,intr_softerr,intr_softerr,NULL,NULL,NULL,NULL,
    NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
    NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
    NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
    NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
    NULL,NULL,NULL,NULL,intr_serintr,intr_serintr,intr_serintr,intr_serintr,
    intr_serintr,intr_serintr,intr_serintr,intr_serintr,intr_serintr,intr_serintr,intr_serintr,intr_serintr
};
