#ifndef _KOZOS_H_INCLUDED_
#define _KOZOS_H_INCLUDED_

#include "defines.h"
#include "syscall.h"
#include "memory.h"

/*システムコール*/
kz_thread_id_t kz_run(kz_func_t func,char* name,int priority,int stacksize,
                    int argc,char* argv[]);
void kz_exit(void);
int kz_wait(void);
int kz_sleep(void);
int kz_wakeup(kz_thread_id_t id);
kz_thread_id_t kz_getid(void);
int kz_chpri(int priority);
void* kz_kmalloc(int size);
int kz_kmfree(void* p);

/*ライブラリ関数*/
void kz_start(kz_func_t func,char* name,int priority,int stacksize,
                    int argc,char* argv[]);

/*致命的エラー発生時に呼び出す*/
void kz_sysdown(void);
/*システムコールを呼び出す*/
void kz_syscall(kz_syscall_type_t type,kz_syscall_param_t* param);

/*ユーザースレッド*/
int test10_1_main(int argc,char* argv[]);

#endif
