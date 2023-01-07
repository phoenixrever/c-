#include <iostream>
using namespace std;
int main()
{
    int arr[5]={0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"请输入"<<n<<"个int数值:";
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
	return 0;
}