#include <iostream>
using namespace std;
int main()
{
    char ch='\0';

    cout<<"请输入一个字符：";
    //cin会判断ch的类型为char 一次只能获取一个字符
    //cin会跳过起始的空格和回车
    cin>>ch;
    cout<<"ch="<<ch<<endl;
	return 0;
}