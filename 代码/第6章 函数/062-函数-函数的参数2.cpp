#include <iostream>
using namespace std;
void inputIntArray(int arr[], int n );
void sortIntArray(int arr[], int n);
void printIntArray(int arr[], int n);
int main()
{
    int arr[5]={0};
    int n = sizeof(arr)/sizeof(arr[0]);

    //获取键盘输入
    inputIntArray(arr, n);

    //对数组排序
    sortIntArray(arr, n);

    //对数组遍历
    printIntArray(arr, n);
	return 0;
}
void printIntArray(int arr[], int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortIntArray(int arr[], int n)
{
    int i=0;
    for(i=0;i<n-1;i++)
    {
        int j=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    return;
}
void inputIntArray(int arr[], int n )
{
    cout<<"请输入"<<n<<"个int数据:";
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return;
}