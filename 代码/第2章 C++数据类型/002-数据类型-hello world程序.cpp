//include 头文件包含 <>包含系统头文件 iotream标注的输入输出流
#include <iostream>

//使用命名空间std
using namespace std;
/*
c++工程中有且仅有一个main  它是程序的唯一入口
main 左边的int描述的是函数的返回值类型
main就是函数名（有且仅有一个）
main右边（）里面描述的是函数的形参（形参类型 形参名）
*/
int main(int argc, char *argv[])
{//{}复合语句 在当前表示的是main的函数体

    //cout输出设备（终端，屏幕）
    //""双引号作用的是字符串
    //endl换行
    //;分号作为语句的结束
    cout << "Hello World!"<</*块注释*/endl;

    //return将其后的表达式结果或数值 作为函数的返回值返回
    //return结束当前函数
    return 0;
}

