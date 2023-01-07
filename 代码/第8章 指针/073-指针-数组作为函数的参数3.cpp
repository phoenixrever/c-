#include <iostream>
using namespace std;
//void outputIntDoubleArray(int arr[3][4], int row, int col)
//二维数组 作为函数的形参 会被优化成 一维的数组指针
void outputIntDoubleArray(int (*arr)[4], int row, int col)
{
    cout<<"内部sizeof(arr) = "<<sizeof(arr)<<endl;//4B

    int i=0,j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<"外部sizeof(arr) = "<<sizeof(arr)<<endl;//48B

    outputIntDoubleArray(arr, row, col);
	return 0;
}