#include <iostream>

using namespace std;
//仿函数
class Print
{
public:
    //重载函数调用运算符
    void operator()(char *str)
    {
        cout<<str<<endl;
    }
};
int main(int argc, char *argv[])
{
    Print ob;
    //对象和（）结合触发operator()调用
    ob("hello Print");

    //Print()为匿名对象
    Print()("hello print");
    return 0;
}
