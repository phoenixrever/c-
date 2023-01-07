#include <iostream>
#include <string>
using namespace std;
int main()
{
   string str1="hello";
   str1.insert(2,"###");
   cout<<str1<<endl;

   str1.erase(2,3);
   cout<<str1<<endl;
   str1.erase(0,str1.size());
   cout<<str1<<endl;
   cout<<str1.size()<<" "<<str1.capacity()<<endl;
   return 0;
}