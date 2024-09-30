#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<pthread.h>

void cleanup(void *arg){
    printf("cleanup : %s\n",(char *)arg);
}
void * thr_func1(void * arg){
    printf("thread 1 start \n");
    pthread_cleanup_push(cleanup,"thread 1 start first handle");
    pthread_cleanup_push(cleanup,"thread 1 start second handle");
    if (arg){
        return ((void *) 1);
    }
    pthread_cleanup_pop(0);
    return ((void *) 0);

}