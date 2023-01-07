#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1="hehehe:hahaha:xixixi:lalala";
    int pos = 0;
    while(1)
    {
        int ret = str1.find(":", pos);
        if(ret<0)
        {
            string tmp = str1.substr(pos, str1.size()-pos);
            cout<<tmp<<endl;
            break;
        }

        string tmp = str1.substr(pos, ret-pos);
        cout<<tmp<<endl;

        pos= ret+1;
    }
	return 0;
}