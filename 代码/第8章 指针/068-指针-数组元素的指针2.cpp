#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"arr[1] = "<< arr[1]<<endl;
    cout<<"*(arr+1) = "<< *(arr + 1)<<endl;;
    cout<<"--------------------"<<endl;
    cout<<"*(arr+1) = "<<*(1 + arr)<<endl;
    cout<<"1[arr] = "<<1 [arr]<<endl;
	return 0;
}