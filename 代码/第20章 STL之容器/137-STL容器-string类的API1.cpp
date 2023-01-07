#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1="http://www.sex.777.sex.com.sex";
    cout<<str1<<endl;
    while(1)
    {
        int ret = str1.find("sex");
        if(ret == -1)
            break;
        str1.replace(ret,3,"***");
    }
    cout<<str1<<endl;
	return 0;
}