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
    cout<<lucy.num<<" "<<lucy.name<<endl;
	return 0;
}