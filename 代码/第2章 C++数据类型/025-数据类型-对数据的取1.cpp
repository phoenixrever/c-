#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    //先将-10转成无符号数（-10的补码）
    unsigned short data = -10;//原码1000 0000 0000 1010 补码1111 1111 1111 0110
    cout<<bitset<16>(data)<<endl;//1111 1111 1111 0110
    cout<<"data="<<data<<endl;//65526==1111 1111 1111 0110
	return 0;
}