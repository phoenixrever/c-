cmake_minimum_required(VERSION 3.22)
project(hello_world)

set(CMAKE_CXX_STANDARD 14)

#add_executable(hello_world main.cpp arrays.cpp)

# 遍历项目根目录下所有的 .cpp 文件
file (GLOB files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    ##clion 会自动帮你添加新建的cpp 删除就好
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
