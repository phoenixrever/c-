#include <iostream>
#include <exception>
using namespace std;
class NewException:public exception
{
private:
    string msg;
public:
    NewException(){}
    NewException(string msg)
    {
        this->msg = msg;
    }
    //重写父类的what
    virtual const char* what()const throw()//防止父类在子类前抛出标准异常
    {
        //将string类转换成char *
        return this->msg.c_str();
    }
    ~NewException(){}
};

int main()
{
    try
    {
        throw NewException("哈哈，自己的异常");

    }
    catch(exception &e)
    {
        cout<<e.what()<<endl;
    }
}
