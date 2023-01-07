#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1="hello";
    str1+="world";
    cout<<str1<<endl;

    string str2="hehe";
    str1 += str2;
    cout<<str1<<endl;

    string str3="hello";
    string str4="world";
    cout<<str3+str4<<endl;

    string str5="hello";
    string str6="world";
    str5.append(str6,2, 3);
    cout<<str5<<endl;

    string str7="hello";
    str7.append("world", 3);
    cout<<str7<<endl;
	return 0;
}