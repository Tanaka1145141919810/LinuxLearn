//采用signal捕获信号

#include<unistd.h>
#include<stdio.h>
#include<signal.h>


static void signal_func(int signo){
    if(signo == SIGKILL){

    }
}