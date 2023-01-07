#include <iostream>
using namespace std;
int* getAddr(void)
{
    //int data = 100;//不要返回普通局部变量的地址
    static int data = 100;
    return &data;
}
int main()
{
    int *p = NULL;
    p = getAddr();
    cout<<"*p = "<<*p<<endl;//100
	return 0;
}