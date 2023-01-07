#include <iostream>
using namespace std;
#include<string.h>
struct Stu
{
    int num;
    char name[32];
};
int main()
{
    Stu arr[5];
    memset(arr, 0,sizeof(arr));
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"请输入"<<n<<"个学员信息(num name)"<<endl;
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i].num>>arr[i].name;
    }
    cout<<"--------------"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i].num<<" "<<arr[i].name<<endl;
    }
	return 0;
}