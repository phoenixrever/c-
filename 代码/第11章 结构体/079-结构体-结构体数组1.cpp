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
    Stu arr[5]={ {100,"lucy"},{101,"bob"},{102,"tom"},{103,"德玛"},{104,"小炮"} };
    //清空数组
    //memset(arr,0,sizeof(arr));
    int n = sizeof(arr)/sizeof(arr[0]);

    int i;
    for(i=0;i<n;i++)
    {
        //数组的每个元素是结构体变量
        cout<<arr[i].num<<" "<<arr[i].name<<endl;
    }
	return 0;
}