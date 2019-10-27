#include "defines.h"
#include "serial.h"
#include "lib.h"

int main(void)
{
    static char buf[32];

    puts("Hello,world..\n");
   
    while(1)
    {
        puts("kzload> ");
        gets(buf);

        if(!strncmp(buf,"echo",4))
        /*XMODEMでファイルのダウンロード*/
        {
            puts(buf + 4 );
            putc('\n');

        }else if(!strcmp(buf,"exit")){
            break;
        }else{
            puts("unknown.\n");
        }
    }

    return 0;
   
}
