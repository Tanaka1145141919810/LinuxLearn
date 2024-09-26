// 实现文件的读取1,操作系统API调用
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

// 防止重复定义
#ifndef BUF_SIZE 1024
#define BUF_SIZE 1024
#endif

int main(int argc , char ** argv){
    int inputFlag;   //需要打开的文件
    int outputFlag;  // 需要写入的文件
    int OpenFlags;
    mode_t filePerms;
    ssize_t numRead;
    char buf[BUF_SIZE]; //文件缓存

    if(argc != 3){
        printf("参数数目错误\n");
    }

    inputFlag = open(argv[1],O_RDONLY); //打开文件只读
    if(inputFlag == -1){
        printf("打开需要读取的文件文件失败\n");
        exit(-1);
    }

    OpenFlags = O_WRONLY | O_CREAT | O_TRUNC;//O_TRUNC 清空文件
    filePerms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH; //文件权限
    outputFlag = open(argv[2],OpenFlags,filePerms);
    if(outputFlag == -1){
        printf("打开需要写入的文件失败\n");
        exit(-1);
    }
    // 开始读取写入文件
    while( (numRead = read(inputFlag,buf,BUF_SIZE)) > 0){
        if(write(outputFlag,buf,numRead)!= numRead){
            printf("文件无法写入该长度的数据\n");
            exit(-1);
        }
        if(close(inputFlag) == -1){
            printf("关闭读取文件失败\n");
            exit(-1);
        }
        if(close(OpenFlags) == -1){
            printf("关闭写入文件失败\n");
            exit(-1);
        }
    }
    return 0;
}
   
    





