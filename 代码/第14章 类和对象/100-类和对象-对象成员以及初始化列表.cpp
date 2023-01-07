#include <iostream>

using namespace std;
class A
{
public:
    int mA;
public:
    A()
    {
        cout<<"A类无参构造"<<endl;
    }
    A(int a)
    {
        mA = a;
        cout<<"A类有参构造"<<endl;
    }
    ~A()
    {
        cout<<"A类的析够函数"<<endl;
    }
};

class B
{
public:
    int mB;
    A ob;//对象成员
public:
    B()
    {
        cout<<"B类的无参构造"<<endl;
    }
    //初始化列表
    B(int a, int b):ob(a)
    {
        mB = b;
        cout<<"B类的有参构造"<<endl;
    }
    ~B()
    {
        cout<<"B类的析够函数"<<endl;
    }

};
int main(int argc, char *argv[])
{
    B ob1(10,20);
    return 0;
}
