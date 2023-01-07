#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);

    int i=0;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
	return 0;
}