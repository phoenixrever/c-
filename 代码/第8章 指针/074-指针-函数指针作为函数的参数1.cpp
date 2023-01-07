#include <iostream>
using namespace std;
int myAdd(int x,int y);
int main()
{
    //给函数指针类型取别名
    typedef int (*FUN_TYPE)(int x,int y);
    FUN_TYPE p=NULL;
    cout<<"sizeof(p) = "<<sizeof(p)<<endl;//4B

    //函数指针 和 函数入口地址建立关系
    p = myAdd;

    //通过p调用myAdd函数（函数+(实参)）
    cout<<p(10,20)<<endl;//30
	return 0;
}
int myAdd(int x,int y)
{
    return x+y;
}