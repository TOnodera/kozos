#ifndef _INTERRUPT_H_INCLUDED_
#define _INTERRUPT_H_INCLUDED_

/*リンカスクリプトで定義してあるシンボル*/
extern char softvec;
#define SOFTVEC_ADDR (&softcec)

typedef short softvec_type_t;/*ソフトウェア割り込みベクタの種別を表す型の定義*/
typedef void (*softvec_handler_t)(softvec_type_t type,unsigned long sp);

#define SOFTVECS((softvec_handler_t*)SOFTVEC_ADDR) /*ソフトウェア割り込みベクタの位置*/

#define INTR_ENEBLE asm volatile ("andc.b #0x3f,ccr")
#define INTR_DISABLE asm volatile ("orc.b #0xc0,ccr")

/*ソフトウェア割り込みベクタの初期化*/
int softvec_init(void);
/*ソフトウェア割り込みベクタの設定*/
int softvec_setintr(softvec_type_t type,softvec_handler_t handler);/*ソフトウェア割り込みベクトの設定用関数*/
/*共通割り込みハンドラ*/
void interrupt(softvec_type_t type,unsigned long sp);

#endif