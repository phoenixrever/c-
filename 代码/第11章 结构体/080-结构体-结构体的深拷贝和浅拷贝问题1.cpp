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
    Stu lucy;
    lucy.num = 100;
    lucy.name = new char[32];
    strcpy(lucy.name, "hello world");

    Stu bob;
    bob.num = lucy.num;
    bob.name = new char[32];
    strcpy(bob.name,lucy.name);

    cout<<bob.num<<" "<<bob.name<<endl;
    delete [] lucy.name;
    delete [] bob.name;
	return 0;
}