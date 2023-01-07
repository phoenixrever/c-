#include <iostream>
using namespace std;
int main()
{
    char *arr[4]={"hehehehe","xixixixi", "lalalala", "hahahahaha"};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
	return 0;
}