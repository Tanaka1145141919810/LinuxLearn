## 设置CMake最低版本号，必须大于3.16
cmake_minimum_required(VERSION 3.10)

## 设置项目名称
project(LinuxLearn C )


## 添加可执行文件
add_executable(LinuxLearn src/fileSystem1.c)
