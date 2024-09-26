// atexit函数用法
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
static int my_exit1(){
    printf("my exit1\n");
    exit(0);
}

static int my_exit2(){
    printf("my exit2\n");
    exit(0);
}
// 堆栈的方式，下面程序先弹出exit2，再弹出exit1
int main(int argc , char ** argv){
    if(atexit(my_exit1) != 0){
        printf("error occuer : my_exit1\n");
        exit(-1);
    }
    if(atexit(my_exit2) != 0){
        printf("error occur :my_exit2\n");
        exit(-1);
    }
    printf("Done ..........");
    exit(0);
}