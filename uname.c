#include <sys/utsname.h>
#include <stdio.h>

struct utsname data;

int main(int argc, char const *argv[])
{
    uname(&data);
    printf("sysname:  %s\n",data.sysname);
    printf("nodename: %s\n",data.nodename);
    printf("release:  %s\n",data.release);
    printf("version:  %s\n",data.version);
    printf("machine:  %s\n",data.machine);
    return 0;
}
