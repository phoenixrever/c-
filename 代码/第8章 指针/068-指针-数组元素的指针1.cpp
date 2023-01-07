#include <iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *p = arr;//p=arr

    //遍历整个数组元素
    int i;
    for(i=0;i<n;i++)
    {
        //cout<<arr[i]<<" ";
        //cout<<*(arr+i)<<" ";
        cout<<*(p+i)<<" ";
    }
    cout<<endl;

	return 0;
}