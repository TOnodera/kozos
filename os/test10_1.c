#include "defines.h"
#include "kozos.h"
#include "lib.h"

int test10_1_main(int argc,char* argv[])
{
    char* p1,* p2;
    int i,j;

    puts("test10_1 started.\n");

    for(i=4;i<=56;i+=4){

        /*メモリを動的に獲得*/
        p1 = kz_kmalloc(i);
        p2 = kz_kmalloc(i);

        for(j=0;j<i-1;j++)
        {
            /*獲得した領域を特定のパターンで埋める*/
            p1[j] = 'a';
            p2[j] = 'b';
        }
        p1[j] = '\0';
        p2[j] = '\0';

        /*メモリの内容をコンソールに出力*/
        putxval((unsigned long)p1,8); puts(" -> "); puts(p1); putc('\n');
        putxval((unsigned long)p2,8); puts(" -> "); puts(p2); putc('\n');

        /*動的に獲得したメモリの開放*/
        kz_kmfree(p1);
        kz_kmfree(p2);

    }

    return 0;

}