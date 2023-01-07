#include <iostream>

using namespace std;
class Data
{
public:
    Data()
    {
        cout<<"Data的无参构造"<<endl;
    }
    ~Data()
    {
        cout<<"Data的析够"<<endl;
    }
    void func()
    {
        cout<<"Data的func函数"<<endl;
    }
};

//智能指针
class SmartPointer
{
private:
    Data *p;
public:
    SmartPointer(){}
    SmartPointer(Data *p)
    {
        this->p = p;
    }
    ~SmartPointer()
    {
        delete p;
    }
    // 重载->运算符
    Data* operator->()
    {
        return p;
    }
    Data& operator*()
    {
        return *p;
    }
};
int main(int argc, char *argv[])
{
    SmartPointer sp(new Data);

    //sp.operator ->()->func();
    sp->func();
    (*sp).func();

    return 0;
}
