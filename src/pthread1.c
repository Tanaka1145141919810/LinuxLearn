// 线程学习1
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>

pthread_t ntid;

void printPid(char *s){
    pid_t pid;
    pthread_t tid;
    pid = getpid();
    tid = pthread_self();
    printf("%s\n",s);
    printf("pid is %d\n",pid);
    printf("tid is %d\n",tid);
    return;
}

void * thr_func(void * arg){
    printPid("new : thread\n");
    return ((void *) 0);
}

int main(int argc , char ** argv){
    int err;
    err = pthread_create(&ntid,NULL,thr_func,NULL);
    if (err != 0){
        printf("create pthread error\n");
        exit(-1);
    
    }
    printPid("main : thread\n");
    sleep(1);
    return 0;

}