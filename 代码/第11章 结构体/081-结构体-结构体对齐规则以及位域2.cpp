#include <iostream>
using namespace std;
struct B
{
    unsigned char a:4;
    unsigned char :2;//无意义位段
    unsigned char b:2;
};
int main()
{
    cout<<"sizeof(B) = "<<sizeof(B)<<endl;
	return0;
}