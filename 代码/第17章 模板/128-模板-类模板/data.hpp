#ifndef DATA_H
#define DATA_H
#include <iostream>
using namespace std;
template<class T1, class T2>
class Data
{
private:
    T1 a;
    T2 b;
public:
    Data();
    Data(T1 a, T2 b);
    void showData(void);
};

template<class T1, class T2>
Data<T1,T2>::Data()
{
    cout<<"�޲ι���"<<endl;
}

template<class T1, class T2>
Data<T1,T2>::Data(T1 a, T2 b)
{
    this->a = a;
    this->b = b;
    cout<<"�вι���"<<endl;
}

template<class T1, class T2>
void Data<T1,T2>::showData()
{
    cout<<a<<" "<<b<<endl;
}
#endif // DATA_H
