#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int a = 10;
    const int data = a;//以变量初始化data
    int *p = (int *)&data;
    *p = 2000;
    cout<<"*p = "<<*p<<endl;//2000
    cout<<"data = "<<data<<endl;//2000
	return 0;
}