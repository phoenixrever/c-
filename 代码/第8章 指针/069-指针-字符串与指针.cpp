#include <iostream>
using namespace std;
int main()
{
	char* str2 = (char *)"hello world";
	cout << str2 << endl;//hello world
	cout << str2[6] << endl;//'w'
	str2[6] = 'H';//不允许 给文字常量区 赋值

}