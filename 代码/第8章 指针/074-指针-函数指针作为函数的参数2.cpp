#include <iostream>
using namespace std;
int myAdd(int x,int y)
{
    return x+y;
}
int mySub(int x,int y)
{
    return x-y;
}
int myMul(int x,int y)
{
    return x*y;
}
int myDiv(int x,int y)
{
    return x/y;
}

//设计算法 操作上面的函数
int myCalc(int x,int y,  int (*func)(int,int) )
{
    return func(x,y);
}

int main()
{
    cout<<myCalc(10,20, myAdd)<<endl;//30
    cout<<myCalc(10,20, mySub)<<endl;//-10
    cout<<myCalc(10,20, myMul)<<endl;//200
    cout<<myCalc(10,20, myDiv)<<endl;//0
	return 0;
}