#include <iostream>
using namespace std;
int main()
{
    int arr[10]={0};
    int n = sizeof(arr)/sizeof(arr[0]);

    //获取键盘输入
    cout<<"请输入"<<n<<"个int数值:";
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //求最大值和最小值
    int min=arr[0],max=arr[0];
    for(i=1;i<n;i++)
    {
        //进行比较
        max = max>arr[i]?max:arr[i];
        min = min<arr[i]?min:arr[i];
    }
    cout<<"min="<<min<<" max="<<max<<endl;
	return 0;
}