#include <unistd.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    pid_t parentpid = getpid();
    printf("parent PID: %i\n", parentpid);
    pid_t pid;
    switch( pid=fork() ) {
        case -1:
            printf("ERROR: fork failed!\n");
            break;
        case  0:
            printf("child PID: %i\n", getpid());   /* Hier befinden Sie sich im Kindprozess   */
            char* args[] = {"date", "+%A", (char*)0};
            char* env[] = {"LC_ALL=de_DE.utf8", (char*)0};
            execve("/bin/date", args, env);
            break;
        default:   /* Hier befinden Sie sich im Elternprozess */ 
            break;
}    return 0;
}