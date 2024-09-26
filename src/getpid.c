#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main(int argc, char **argv){
    pid_t parent = getppid();
    pid_t child = getpid();
    printf("child pid = %d\n",child);
    printf("parent pid = %d\n",parent);
    return 0;


}