#include <iostream>
using namespace std;
#include<string.h>
struct Stu
{
    int num;
    char name[32];
};
void inputStuArray(Stu *arr, int n)
{
    cout<<"请输入"<<n<<"个学生信息(num,name)"<<endl;
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>(arr+i)->num>>(arr+i)->name;
    }
}
void sortStuArray(Stu *arr, int n)
{
    int i=0;
    for(i=0;i<n-1;i++)
    {
        int j=0;
        for(j=0;j<n-i-1;j++)
        {
            if(  arr[j].num > arr[j+1].num )
            {
                Stu tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
void outputStuArray(Stu *arr, int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        cout<<arr[i].num<<" "<<arr[i].name<<endl;
    }
}
int main()
{
    Stu arr[5];
    memset(arr, 0,sizeof(arr));
    int n = sizeof(arr)/sizeof(arr[0]);

    //封装函数获取键盘输入
    inputStuArray(arr, n);

    //对结构体数组按学号排序
    sortStuArray(arr, n);

    //输出结构体数组元素的内容
    outputStuArray(arr, n);
	return 0;
}