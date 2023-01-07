#include <iostream>

using namespace std;
int main()
{
    int num = 0;
    num=100;//写操作

    int data = 0;
    data = num;//num读  data写
    cout<<data<<endl;//读操作

    data++;//data = data+1; 等号右边的data读  等号左边的data写
	return 0;
}