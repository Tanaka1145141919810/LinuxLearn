#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>
#include<stdio.h>

void * thr_func1(void *arg){
    printf("thread 1 returning\n");
    return ((void *) 0);
}

void * thr_func2(void * arg){
    printf("thread 2 returning\n");
    pthread_exit((void *)1);
}

int main(int argc , char ** argv){
    pthread_t tid1;
    pthread_t tid2;
    void * tret; //这个用来接受退出码
    int err = pthread_create(&tid1,NULL,thr_func1,NULL);
    if(err != 0){
        printf("create pthread1 failed\n");
        exit(-1);
    }
    err = pthread_create(&tid2,NULL,thr_func2,NULL);
    if(err != 0){
        printf("create pthread2 failed\n");
        exit(-1);
    }
    err = pthread_join(tid1,&tret);
    if(err != 0){
        printf("join pthread1 failed\n");
        exit(-1);
    }   
    printf("pthread 1 exitcode is %d\n",tret);
    err = pthread_join(tid2,&tret);
    if(err != 0){
        printf("join pthread2 failed\n");
        exit(-1);
    }
    printf("pthread 2 exitcode is %d\n",tret);
    return 0;

}