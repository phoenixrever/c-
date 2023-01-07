#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1="hello world";
    cout<<str1[1]<<" "<<str1.at(1)<<endl;
    str1[1]='E';
    str1.at(6)='H';
    cout<<str1<<endl;

    //[] 越界不会抛出异常  at方法 越界会抛出异常
    try
    {
        //str1[100]='A';
        str1.at(100)='A';
    }
    catch(exception &e)
    {
        cout<<"捕获到异常:"<<e.what()<<endl;
    }
	return 0;
}