#include <iostream>
using namespace std;
union Data
{
    char a;
    short b;
    int c;
};
int main()
{
    Data ob;
    ob.a = 10;
    ob.b = 20;
    ob.c = 30;
    cout<<ob.a+ob.b+ob.c<<endl;//90==30+30+30
	return 0;
}