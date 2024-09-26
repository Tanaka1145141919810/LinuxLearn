// 实现第一版的shell
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>
#include<stdlib.h>


#define BUF_SIZE 1024
// 主函数
int main(int argc,char ** argv){
    char buf[BUF_SIZE]; // 存放命令的区域
    pid_t pid;  //进程名称
    int status; //状态标识符

    printf("start ................");
    while(fgets(buf,BUF_SIZE,stdin) != NULL){ //不断的从标准中读入命令
        if(buf[strlen(buf) - 1] == '\n'){
            buf[strlen(buf) - 1] == '\0';
        }
        // 开一个新的进程
        if ((pid = fork() ) < 0) {
            printf("can't create a new process");
            exit(-1);
        }
        else if(pid == 0){ //正常开启子进程
            printf("buf is %s",buf);
            execlp(buf,buf,(char *)0);
            exit(0);
        }
        // 父进程等待
        if ((pid = waitpid(pid , &status,0)) < 0){
            printf("waitpid error");
            exit(-1);
        }
    }
    printf("end...........");
    exit(0);

}
