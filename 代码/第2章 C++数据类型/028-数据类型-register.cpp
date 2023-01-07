#include <iostream>
using namespace std;
int main()
{
    register int data=0;//data将放入寄存器中

    //尽量不要对寄存器变量取地址
    &data;

    //register修饰的变量 只是尽量放入寄存器中
	return 0;
}