#include <iostream>
using namespace std;
int main()
{
    int arr[5]={0};
    int n = sizeof(arr)/sizeof(arr[0]);

    //num取值
    cout<<arr[2]<<endl;

    //num赋值 num=10
    arr[2] = 10;

    //data = num
    arr[3] = arr[2];

    //num++
    arr[3]++;//arr[3] = arr[3]+1


    int i=0;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";//0 0 10 11 0
    }
    cout<<endl;
	return 0;
}