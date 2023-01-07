#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[128]="";
    char str2[128]="";

    cout<<"请输入第一个字符串:";
    cin>>str1;
    cout<<"请输入第二个字符串:";
    cin>>str2;

    if(strcmp(str1, str2) >  0)
    {
        cout<<str1<<"大于"<<str2<<endl;
    }
    else if(strcmp(str1, str2) <  0)
    {
        cout<<str1<<"小于"<<str2<<endl;
    }
    else if(strcmp(str1, str2) ==  0)
    {
        cout<<str1<<"等于"<<str2<<endl;
    }
	return 0;
}