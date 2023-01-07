#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    short data = 10;//原码0000 0000 0000 1010
    cout<<bitset<16>(data)<<endl;//0000 0000 0000 1010
    cout<<"data="<<data<<endl;//10
	return 0;
}