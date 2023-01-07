#include <iostream>
using namespace std;
int main()
{
    char arr[5][128]={"hello","world", "hehehe", "xixixi", "lalala"};
    int row = sizeof(arr)/sizeof(arr[0]);

    int i;
    for(i=0;i<row;i++)
    {
        cout<<arr[i]<<endl;
    }
	return 0;
}