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
    Stu lucy;
    //清空整个结构体变量
    memset(&lucy, 0, sizeof(lucy));
    cout<<lucy.num<<" "<<lucy.name<<endl;
	return 0;
}