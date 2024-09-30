// 下面演示了线程返回的数据在Stack上返回之后被销毁的实例
#include<unistd.h>
#include<pthread.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>

struct foo {
    int a;
    int b;
    int c;
    int d;
};
void printffoo(const char * name,const struct foo * fp){
    printf("foo.a = %d\n",fp->a);
    printf("foo.b = %d\n",fp->b);
    printf("foo.c = %d\n",fp->c);
    printf("foo.d = %d\n",fp->d);
    return;
}
void * thr_func1(void * arg){
    struct foo myfoo = {1,2,3,4};
    printffoo("thread1 : foo is",&myfoo);
    // 返回myfoo
    pthread_exit((void *) &myfoo);
}
void * thr_func2(void * arg){
    printf("thread 2 ID is %lu\n",pthread_self());
    pthread_exit((void *) 0);
}

int main(int argc,char ** argv){
    int err;
    pthread_t tid1;
    pthread_t tid2;
    struct foo *myfoo;

    err = pthread_create(&tid1,NULL,thr_func1,NULL);
    if (err != 0){
        printf("can't create a new thread\n");
        exit(-1);
    }
    err = pthread_join(tid1,(void *)&myfoo);
    if (err != 0){
        printf("can't join a thread\n");
        exit(-1);
    }
    sleep(2);
    printffoo("main : foo is",(struct foo *)myfoo);

}
