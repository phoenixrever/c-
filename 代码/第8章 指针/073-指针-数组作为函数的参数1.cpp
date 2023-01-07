#include <iostream>
using namespace std;
void setNum01(int data)
{
    data = 100;
}

void setNum02(int *p)//int *p=&num;
{
    //*p == num
    *p = 100;
}
int main()
{
    int num =0;

    setNum02(&num);//单向传递之 传地址

    cout<<"num = "<<num<<endl;//100 修改成功
	return 0;
}