#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1="haha";
    string str2="hehe";
    if(str1.compare(str2) == 0)
    {
        cout<<"相等"<<endl;
    }
    else if(str1.compare(str2) > 0)
    {
        cout<<"大于"<<endl;
    }
    else if(str1.compare(str2) < 0)
    {
        cout<<"小于"<<endl;
    }

    if(str1 == str2)
    {
        cout<<"相等"<<endl;
    }
    else if(str1 > str2)
    {
        cout<<"大于"<<endl;
    }
    else if(str1<str2)
    {
        cout<<"小于"<<endl;
    }
	return 0;
}