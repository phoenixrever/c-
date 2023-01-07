#include <iostream>
#include <string>
using namespace std;
int main()
{
    //char *转成string（默认支持）
    string str1;
    str1=(string)"hello";
    cout<<str1<<endl;

    //string 不能直接转成char * 需要成员函数c_str
    string str2="hello";
    char *p = (char *)str2.c_str();
    cout<<p<<endl;
	return 0;
}