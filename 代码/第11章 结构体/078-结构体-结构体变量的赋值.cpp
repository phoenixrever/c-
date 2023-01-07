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
    Stu lucy = {100,"lucy"};
    Stu bob;

#if 0
    //第一种方法：逐个成员赋值(遵循成员类型)
    bob.num = lucy.num;
    strcpy(bob.name, lucy.name);
#elif 1
    //第二中方法：相同类型的结构体变量 可以直接赋值（推荐）
    bob = lucy;
#else
    //第三种方式：内存拷贝（是第二种的底层实现）
    memcpy(&bob, &lucy, sizeof(Stu));
#endif
    cout<<bob.num<<" "<<bob.name<<endl;//100 lucy
	return 0;
}