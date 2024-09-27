//子进程和父进程的竞争情况(改进,父进程运行完成之后子进程开始)
#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

static void charatatime(char *str){
    //字符串指针
    char *ptr;
    char c;

    setbuf(stdout,NULL);
    for(ptr = str ; (c = *ptr++) != 0;){
        putc(c,stdout);
    }
    return ;
}


int main(int argc , char ** argv){
    pid_t pid;
    if((pid = fork() < 0)){
        printf("fork error\n");
        exit(-1);
    }
    else if(pid == 0){
        waitpid(getppid(),NULL,0);
        charatatime("Hello World , This is from child\n");
    }
    else{
        charatatime("Hello World , This is from parent\n");
        
    }
    exit(0);

}
