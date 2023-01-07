#include <iostream>
using namespace std;
void set_data(int num)
{
    cout<<"num="<<num<<endl;
    //修改外部变量的值失败
    num=100;
}
int main()
{
    int data = 0;
    set_data(data);

    cout<<"data="<<data<<endl;//0
	return 0;
}