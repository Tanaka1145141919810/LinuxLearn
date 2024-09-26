#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/wait.h>
#include<string.h>

//定义两个全局变量
int g_varInt  = 1;
char g_string[100] = "Hello World";

int main(int argc , char ** argv){
    // 设置局部变量
    int varInt = 1;
    char l_string[] = "Hello World";
    pid_t pid;
    printf("before fork ......\n");
    //开始Fork
    if(( pid = fork()) < 0){
        printf("fork error\n");
        exit(-1);
    }
    //子进程
    if (pid == 0){
        //分别对全局变量和局部变量
        g_varInt++;
        //strcat(g_string," ni hao");
        varInt ++;
        //strcat(l_string," ni hao");
        printf("child g_varInt : %d\n",g_varInt);
        printf("child g_string is : %s\n",g_string);
        printf("child varInt : %d\n",varInt);
        printf("child l_string is : %s\n",l_string);
    }
    else {
        sleep(2);
        waitpid(pid,0,0);
        //g_varInt++;
        //strcat(g_string," ni hao");
        //varInt ++;
        //strcat(l_string," ni hao");
        printf("parent g_varInt : %d\n",g_varInt);
        printf("parent g_string is : %s\n",g_string);
        printf("parent varInt : %d\n",varInt);
        printf("parent l_string is : %s\n",l_string);

    }


}