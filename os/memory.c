#include "defines.h"
#include "kozos.h"
#include "lib.h"
#include "memory.h"

/**
 * メモリブロック構造体
 */
typedef struct _kzmem_block{
    struct _kzmem_block* next;
    int size;
}kzmem_block;

/**
 * メモリプール構造体
 */ 
typedef struct _kzmem_pool{
    int size;
    int num;
    kzmem_block* free;
}kzmem_pool;

/*メモリプールの定義*/
static kzmem_pool pool[] = {
    {16,8,NULL},{32,8,NULL},{64,4,NULL}
};

#define MEMORY_AREA_NUM (sizeof(pool)/sizeof(*pool))


