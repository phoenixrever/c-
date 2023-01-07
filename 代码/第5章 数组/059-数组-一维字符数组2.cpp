#include <iostream>
using namespace std;
int main()
{
    char str[32]="";

    cout<<"请输入一个字符串:";
    cin.getline(str,sizeof(str));

    //获取字符串的长度
    int i=0;
    while(str[i] != '\0')
        i++;

    cout<<str<<"的长度:"<<i<<endl;
	return 0;
}