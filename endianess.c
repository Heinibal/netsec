#include <stdio.h>

int main(int argc, char const *argv[])
{
    int test = 0x01234567;
    char* parts = &test;
    char part;
    int i;
    for (i = 0; i<4; i++){
        part = parts[i];
        printf("%i\n", part);
    }
    if (part == 0x01){
        printf("=> Dieser Rechner nutzt Little Endian.\n");
    }
    else{
        printf("=> Dieser Rechner nutzt Big Endian.\n");
    }
    return 0;
}