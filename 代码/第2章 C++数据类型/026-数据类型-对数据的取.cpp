#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    short data=0x8080;//1000 0000 1000 0000
    cout<<bitset<16>(data)<<endl;//1000 0000 1000 0000
    cout<<"data="<<data<<endl;//-32640 =1111 1111 1000 0000
	return 0;
}