#include <iostream>
using namespace std;
int main()
{
    int data = 0;

    //获取键盘输入
    cout<<"请输入一个int数据:";
    cin>>data;

    //判断是否被3整除
    if(data%3 == 0)
    {
        cout<<data<<"能被3整除"<<endl;
    }
    else
    {
        cout<<data<<"不能被3整除"<<endl;
    }
	return 0;
}