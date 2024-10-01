#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

struct foo {
    int f_count ;
    pthread_mutex_t f_lock;
    int f_id;
};

struct foo * foo_alloc(int id){
    struct foo *fp;
    if ((fp = malloc(sizeof(struct foo))) != NULL){
        fp->f_count = 1;
        fp->f_id = id;
        if(pthread_mutex_init(&fp->f_lock,NULL) != 0){
            free(fp);
            return(NULL);
        }
    }
    return fp;
}
// 带锁的加法
void foo_hold(struct foo *fp){
    pthread_mutex_lock(&fp->f_lock);
    fp->f_count++;
    pthread_mutex_unlock(&fp->f_lock);

}

void foo_rele(struct foo * fp){
    pthread_mutex_lock(&fp->f_lock);
    if(--fp->f_count == 0){
        pthread_mutex_unlock(&fp->f_lock);
        pthread_mutex_destroy(&fp->f_lock);
        free(fp);
    }
    else {
        pthread_mutex_unlock(&fp->f_lock);
    }
}

int main(int argc , char ** argv){
    struct foo *fp = foo_alloc(1);
    foo_hold(fp);
    printf("foo->f_count is %d\n",fp->f_count);
    printf("foo->f_lock is %d\n",fp->f_lock);
    foo_rele(fp);
    foo_rele(fp);
    printf("foo->fount is %d\n",fp->f_count);
}