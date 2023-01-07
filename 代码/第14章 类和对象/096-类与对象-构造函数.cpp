#include <iostream>

using namespace std;
class Data
{
public:
    int mA;
public:
#if 1
    //无参构造函数
    Data()
    {
        mA=0;
        cout<<"无参构造函数"<<endl;
    }
#endif
#if 1
    //有参构造函数
    Data(int a)
    {
        mA=a;
        cout<<"有参构造函数 mA="<<mA<<endl;
    }
#endif
};
#include<string.h>
class Data2
{
public:
    char *name;
public:
    Data2(){
        name=NULL;
    }
    Data2(char *str)
    {
        name = new char[strlen(str)+1];
        strcpy(name, str);
        cout<<"有参构造"<<endl;
    }
    ~Data2()
    {
        if(name != NULL)
            delete [] name;
        cout<<"析构函数"<<endl;
    }
};
int main(int argc, char *argv[])
{
    Data2 ob("hello world");
    cout<<ob.name<<endl;
    return 0;
}
