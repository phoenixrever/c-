#include <iostream>

using namespace std;
//有 纯虚函数的类 为抽象类
class Animal
{
public:
    Animal()
    {
        cout<<"Animal构造"<<endl;
    }
    //纯虚函数
    virtual void speak(void)=0;

    //虚析构
    virtual ~Animal()
    {
        cout<<"Aniaml的析构函数"<<endl;
    }
};
class Dog:public Animal
{
public:
    Dog()
    {
        cout<<"Dog构造"<<endl;
    }
    //子类一定要重写 父类的所有纯虚函数
    void speak(void)
    {
        cout<<"狗在汪汪"<<endl;
    }
    ~Dog()
    {
        cout<<"Dog的析构函数"<<endl;
    }
};
int main(int argc, char *argv[])
{

    Animal *p = new Dog;
    p->speak();//"狗在汪汪"

    //通过父类指针 释放子类的所有空间
    delete p;
    return 0;
}
