#include <iostream>
using namespace std;
int main()
{
    int *p = NULL;
    p = new int;//从堆区申请int类型大小的空间
    *p = 100;
    cout<<"*p="<<*p<<endl;//100

    //释放空间
    delete p;

    //new申请空间的同时 初始化空间内容
    int *p1 = NULL;
    p1 = new int(100);
    cout<<"*p="<<*p<<endl;//100
    delete p1;
	return 0;
}