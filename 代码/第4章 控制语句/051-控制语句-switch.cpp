#include <iostream>

using namespace std;
int main()
{
    int date = 0;
    cout<<"请输入1~7的数值:";
    cin>>date;

    if(date<1 || date>7)
    {
        cout<<"输入的时无效数值，请输入1~7的数值"<<endl;
        return;//函数返回值结束
    }

    switch(date)
    {
    case 1:
        cout<<"星期一"<<endl;
        break;
    case 2:
        cout<<"星期二"<<endl;
        break;
    case 3:
        cout<<"星期三"<<endl;
        break;
    case 4:
        cout<<"星期四"<<endl;
        break;
    case 5:
        cout<<"星期五"<<endl;
        break;
    case 6:
        cout<<"星期六"<<endl;
        break;
    case 7:
        cout<<"星期日"<<endl;
        break;
    }
	return 0;
}