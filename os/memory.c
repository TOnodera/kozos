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

/*メモリプールの初期化*/
static int kzmem_init_pool(kzmem_pool* p)
{
    int i;
    kzmem_block* mp;
    kzmem_block** mpp;
    extern char freearea;
    static char* area = &freearea;

    mp = (kzmem_block*)area;

    /*個々の領域をすべて解決済みリンクリストにつなぐ*/
    mpp = &p->free;
    for(i = 0;i<p->num;i++)
    {
        *mpp=mp;
        memset(mp,0,sizeof(*mp));
        mp->size = p->size;
        mpp = &(mp->next);
        mp = (kzmem_block*)((char*)mp+p->size);
        area+=p->size;
    }

    return 0;
}

/*動的メモリの初期化*/
int kzmem_init(void)
{
    int i;
    for(i=0;i<MEMORY_AREA_NUM;i++)
    {
        kzmem_init_pool(&pool[i]);
    }
    return 0;
}

/*動的メモリの獲得*/
void* kzmem_alloc(int size)
{
    int i;
    kzmem_block* mp;
    kzmem_pool* p;

    for(i=0;i<MEMORY_AREA_NUM;i++)
    {
        p=&pool[i];
        if( size <= ( p->size - sizeof(kzmem_block) ) )
        {
            if(p->free == NULL)
            {
                kz_sysdown();/*解放済み領域がないのでダウンさせる*/
                return NULL;
            }
            /*解放済み領域から領域を獲得する*/
            mp = p->free;
            p->free = p->free->next;
            mp->next = NULL;
            
            /*
            実際に利用可能な領域は構造体の直後の領域になるので
            直後の領域を返す
            */
           return mp+1;
        }
    }
    kz_sysdown();
    return NULL;/*指定されたサイズを格納できる領域がないs*/
}

/*メモリ領域の開放*/
void kzmem_free(void* mem)
{
    int i;
    kzmem_block* mp;
    kzmem_pool* p;

    /*領域の直前にあるメモリブロック構造体を取得*/
    mp = ((kzmem_block*)mem - 1);

    for(i=0;i<MEMORY_AREA_NUM;i++)
    {
        p = &pool[i];
        if(mp->size == p->size)/*同じサイズのメモリプールを検索*/
        {
            /*領域を解放済みリンクリストに戻す*/
            mp->next = p->free;
            p->free = mp;
            return;
        }
    }

    kz_sysdown();
}