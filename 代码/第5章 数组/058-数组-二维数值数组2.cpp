#include <iostream>
using namespace std;
int main()
{
    int arr[5][4]={{56,75,78,89},{89,98,76,67},{88,99,77,66},{67,78,89,90},{98,97,96,95}};
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    float scoreAvg[5]={0.0f};

    int i=0;
    for(i=0;i<row;i++)
    {
        //求和
        int j=0;
        float sum = 0;
        for(j=0;j<col;j++)
        {
            sum += arr[i][j];
        }
        //求平均成绩
        scoreAvg[i] = sum/col;
    }

    for(i=0;i<row;i++)
    {
        cout<<scoreAvg[i]<<" ";
    }
    cout<<endl;
	return 0;
}