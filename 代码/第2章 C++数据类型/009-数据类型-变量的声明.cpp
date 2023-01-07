#include <iostream>
using namespace std;
//提前：变量声明 需要加extern修饰
extern int data;

int main()
{
    //先使用
    cout<<"data="<<data<<endl;
	return 0;
}

//后定义
int data = 0;