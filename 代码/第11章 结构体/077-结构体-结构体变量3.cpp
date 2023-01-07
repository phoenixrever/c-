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
    Stu lucy ={100,"lucy"};

    lucy.num += 100;
    //name成员时数组名 位符号常量 不允许用=给name赋值
    //lucy.name = "bob";//err
    strcpy(lucy.name, "bob");

    cout<<lucy.num<<" "<<lucy.name<<endl;//200 bob
	return 0;
}