#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    short data1 = -10;//补码存储
    cout<<bitset<16>(data1)<<endl;//1111111111110110
    short data2 = 6;//原码存储
    cout<<bitset<16>(data2)<<endl;//0000000000000110
    short data3 = 0x8080;//原码存储
    cout<<bitset<16>(data3)<<endl;//1000000010000000
	return 0;
}