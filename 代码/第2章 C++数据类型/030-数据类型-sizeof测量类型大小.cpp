#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    cout<<sizeof('a')<<endl;//1B
    cout<<sizeof(10)<<endl;//4B
    cout<<sizeof(short)<<endl;//2B
    cout<<sizeof(long)<<endl;//32位平台 4B
    cout<<sizeof(float)<<endl;//4B
    cout<<sizeof(double)<<endl;//8B
	return 0;
}