#include <iostream>
using namespace std;
int main()
{
    //定义两个变量
    int num1 = 0;
    int num2 = 0;

    //获取键盘输入
    cout<<"请输入两个int数值:";
    cin>>num1>>num2;

    //求最大值
    if(num1 > num2 )
    {
        cout<<"最大值为:"<<num1<<endl;
    }
    else
    {
        cout<<"最大值为:"<<num2<<endl;
    }
	return 0;
}