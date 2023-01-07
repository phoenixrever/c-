#include <iostream>
using namespace std;
//void ouputIntArray(int arr[5], int n)
//一维数组作为函数的参数 会被编译器 优化成  指针变量
void ouputIntArray(int *arr, int n)
{
    cout<<"内部sizeof(arr) = "<<sizeof(arr)<<endl;//4B
    int i=0;
    for(i=0;i<n;i++)
    {
        //cout<<*(arr+i)<<" ";
        cout<<arr[i]<<" ";//推荐
    }
    cout<<endl;
}
int main()
{
    int arr[5]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"外部sizeof(arr) = "<<sizeof(arr)<<endl;//20B

    //遍历数组
    ouputIntArray(arr, n);// 10 20 30 40 50
	return 0;
}