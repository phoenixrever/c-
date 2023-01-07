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
    memset(&lucy, 0,sizeof(Stu));

    cout<<"请输入学号 姓名:";
    cin>>lucy.num>>lucy.name;

    cout<<lucy.num<<" "<<lucy.name<<endl;
	return 0;
}