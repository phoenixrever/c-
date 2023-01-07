#include <iostream>
using namespace std;
#include<time.h>
int main()
{
    //设置随机数种子 time(NULL)获取当前时间
    srand(time(NULL));

    //产生随机数据的函数rand()
    cout<<rand()<<endl;
	return 0;
}