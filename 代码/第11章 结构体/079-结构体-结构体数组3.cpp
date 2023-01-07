#include <iostream>
using namespace std;
#include<string.h>
struct Stu
{
    int num;
    char name[32];
};
int main()
{
    Stu lucy={100, "lucy"};
    Stu *p = &lucy;

    //*p ==lucy
    cout<<lucy.num<<" "<<lucy.name<<endl;
    cout<<(*p).num<<" "<<(*p).name<<endl;

    //通过指针变量 使用-> 访问成员
    cout<<p->num<<" "<<p->name<<endl;

    //如果是地址可以直接使用->访问成员 如果是结构体变量 需要是.访问成员
    cout<<(&lucy)->num<<" "<<(&lucy)->name<<endl;
	return 0;
}