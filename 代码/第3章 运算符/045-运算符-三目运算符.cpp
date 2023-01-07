#include <iostream>

using namespace std;
int main()
{
    int data1 = 10;
    int data2 = 20;

    (data1>data2?data1:data2) = 200;
    cout<<"data1 = "<<data1<<endl;//10
    cout<<"data2 = "<<data2<<endl;//200
	return 0;
}