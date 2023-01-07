#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int num = 100;
    cout<<"num的二进制："<<bitset<8>(num)<<endl;
    cout<<"num的八进制："<<oct<<num<<endl;
    cout<<"num的十进制："<<dec<<num<<endl;
    cout<<"num的十六进制："<<hex<<num<<endl;
	return 0;
}