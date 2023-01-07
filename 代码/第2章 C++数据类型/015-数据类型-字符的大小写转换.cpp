#include <iostream>
using namespace std;
int main()
{
    //定义一个字符变量
    char ch='\0';

    //给字符变量获取键盘输入
    cout<<"请输入一个字符";
    cin>>ch;

    //大小写转换
    if(ch>='a' && ch<='z')//小写字母
    {
        //小写转换成大写
        ch = ch-('a'-'A');
    }
    else if(ch>='A' && ch<='Z')//大写字母
    {
        //大写转小写
        ch = ch+('a'-'A');
    }

    //输出转换后的结果
    cout<<"ch = "<<ch<<endl;
	return 0;
}