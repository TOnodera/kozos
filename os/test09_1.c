#include "defines.h"
#include "kozos.h"
#include "lib.h"

int test09_1_main(int argc,char* argv[])
{

    char c='a';

    puts("test09_1 started.\n");

    puts("thread : 9-1 -->");
    numberDump(c++);
    puts("test09_1 sleep in.\n");
    kz_sleep();
    puts("test09_1 sleep out.\n");

    puts("thread : 9-1 -->");
    numberDump(c++);

    puts("test09_1 chpri in.\n");
    kz_chpri(3);
    puts("test09_1 chpri out.\n");

    puts("thread : 9-1 -->");
    numberDump(c++);

    puts("test09_1 wait in.\n");
    kz_wait();
    puts("test09_1 wait out.\n");

    puts("thread : 9-1 -->");
    numberDump(c++);

    puts("test09_1 trap in.\n");
    asm volatile ("trapa #1");
    puts("test09_1 trap out.\n");

    puts("thread : 9-1 -->");
    numberDump(c++);

    puts("test09_1 exit.\n");

    puts("thread : 9-1 -->");
    numberDump(c++);

    return 0;
}
