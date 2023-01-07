#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    typedef int MYARRAY[5];
    MYARRAY arr={10,20,30,40,50};

    int i=0;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
	return 0;
}