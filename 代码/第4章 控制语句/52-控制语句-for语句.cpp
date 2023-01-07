#include <iostream>
using namespace std;
int main()
{
    int i=0;
    int sum;

    //for求1~100的和
    for(i=1,sum=0 ; i<=100 ; i++)
    {
        sum = sum+i;
    }
    cout<<"sum = "<<sum<<endl;//5050
	return 0;
}