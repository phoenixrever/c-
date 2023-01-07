#include <iostream>
using namespace std;
int main()
{
    char arr[5][32]={""};
    int row = sizeof(arr)/sizeof(arr[0]);

    //获取键盘输入
    int i;
    for(i=0;i<row;i++)
    {
        cin>>arr[i];
    }

    //输出二维字符数组的字符串
    for(i=0;i<row;i++)
    {
        cout<<arr[i]<<endl;
    }
	return 0;
}