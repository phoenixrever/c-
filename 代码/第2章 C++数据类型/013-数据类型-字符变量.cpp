#include <iostream>
using namespace std;
int main()
{
    char ch1='x';
    cout<<ch1<<endl;//'x'
    cout<<(int)ch1<<endl;//120

    ch1 = 120;
    cout<<ch1<<endl;//'x'
    cout<<(int)ch1<<endl;//120
	return 0;
}