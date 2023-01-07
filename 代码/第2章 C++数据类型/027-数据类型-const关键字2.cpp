#include <iostream>
#include <bitset>
using namespace std;
int main()
{

    const int data=100;
    int *p = (int *)&data;
    *p = 2000;
    cout<<"*p = "<<*p<<endl;//2000
    cout<<"data = "<<data<<endl;//100
	return 0;
}