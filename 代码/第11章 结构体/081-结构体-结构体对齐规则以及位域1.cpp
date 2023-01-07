#include <iostream>
using namespace std;
struct A
{
    unsigned char a:2;
    unsigned char b:2;
    unsigned char c:4;
};
int main()
{
    A ob;
    ob.a = 13;//1101
    cout<<"ob.a = "<<(int)(ob.a)<<endl;
	return 0;
}