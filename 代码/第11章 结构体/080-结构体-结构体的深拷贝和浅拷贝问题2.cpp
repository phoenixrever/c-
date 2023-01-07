#include <iostream>

using namespace std;
#include<string.h>
struct Stu
{
    int num;
    char *name;
};
int main()
{
    //结构体在堆区
    Stu *p = new Stu;

    //结构体中指针成员指向堆区
    p->name = new char[32];

    //赋值
    p->num = 100;
    strcpy(p->name, "hello world");
    cout<<p->num<<" "<<p->name<<endl;

    //释放空间
    delete [] p->name;//先释放成员指向
    delete p;//再释放结构体
	return 0;
}