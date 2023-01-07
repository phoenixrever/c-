#include <iostream>
#include <string>
using namespace std;
int main()
{
   string str1("hello world");
   cout<<str1<<endl;
   string str2(5,'A');
   cout<<str2<<endl;
   string str3 = str2;
   cout<<str3<<endl;

   string str4;
   str4 = "hello world";
   cout<<str4<<endl;
   str4 ='W';
   cout<<str4<<endl;

   str4.assign("hello world", 5);
   cout<<str4<<endl;

   string str5="hello world";
   str4.assign(str5, 2,3);
   cout<<str4<<endl;
   return 0;
}