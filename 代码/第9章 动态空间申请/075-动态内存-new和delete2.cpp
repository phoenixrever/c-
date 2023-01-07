#include <iostream>
using namespace std;
int main()
{
    int *arr=NULL;
    arr=new int[5]{10,20,30,40,50};

    int i=0;
    for(i=0;i<5;i++)
    {
        //cout<<*(arr+i)<<" ";
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //如果new有[] 那么delete是也需要[]
    delete [] arr;
	return 0;
}