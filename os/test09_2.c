#include "defines.h"
#include "kozos.h"
#include "lib.h"

int test09_2_main(int argc,char* argv[])
{

    char c = 'a';

    puts("test09_2 started.\n");

    puts("thread : 9-2 -->");
    numberDump(c++);

    puts("test09_2 sleep in.\n");
    kz_sleep();
    puts("test09_2 sleep out.\n");

    puts("thread : 9-2 -->");
    numberDump(c++);

    puts("test09_2 chpri in.\n");
    kz_chpri(3);
    puts("test09_2 chpri out.\n");

    puts("thread : 9-2 -->");
    numberDump(c++);

    puts("test09_2 wait in.\n");
    kz_wait();
    puts("test09_2 wait out.\n");

    puts("thread : 9-2 -->");
    numberDump(c++);

    puts("test09_2 exit.\n");

    puts("thread : 9-2 -->");
    numberDump(c++);

    return 0;
}
