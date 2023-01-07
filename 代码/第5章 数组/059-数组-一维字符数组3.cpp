#include <iostream>
using namespace std;
int main()
{
    char arr1[]="hello";
    cout<<arr1;//hello

    char arr2[]="hel\0lo";
    cout<<arr2;//hel

    char arr3[]={'e','h'};
    cout<<arr3<<endl;
	return 0;
}