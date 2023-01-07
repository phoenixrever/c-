#include <iostream>
using namespace std;
int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    int num4 = 40;

    int *arr[4] = {&num1, &num2, &num3, &num4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i;
    for(i=0;i<n;i++)
    {
        cout<<*arr[i]<<" ";
    }
    cout<<endl;
	return 0;
}