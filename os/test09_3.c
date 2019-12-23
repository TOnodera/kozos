#include "defines.h"
#include "kozos.h"
#include "lib.h"

int test09_3_main(int argc,char* argv[])
{
    char c = 'a';

    puts("test09_3 started.\n");

    puts("thread : 9-3 -->");
    numberDump(c++);

    puts("test09_3 wakeup in (test09_1).\n");
    kz_wakeup(test09_1_id);
    puts("test09_3 wakeup out.\n");

    puts("thread : 9-3 -->");
    numberDump(c++);

    puts("test09_3 wakeup in (test09_2).\n");
    kz_wakeup(test09_2_id);
    puts("test09_3 wakeup out.\n");

    puts("thread : 9-3 -->");
    numberDump(c++);

    puts("test09_3 wait in.\n");
    kz_wait();
    puts("test09_3 wait out.\n");

    puts("thread : 9-3 -->");
    numberDump(c++);

    puts("test09_3 exit in.\n");
    kz_exit();
    puts("test09_3 exit out.\n");

    puts("thread : 9-3 -->");
    numberDump(c++);

    return 0;
}
