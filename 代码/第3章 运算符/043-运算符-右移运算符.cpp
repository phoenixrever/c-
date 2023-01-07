#include <iostream>
#include<bitset>
using namespace std;

int main()
{
    short data = -10;//1111 1111 1111 0110
    data = data>>4;
    //0000 1111 1111 1111 逻辑右移   1111 1111 1111 1111算术右移
    cout<<bitset<16>(data)<<endl;
	return 0;
}