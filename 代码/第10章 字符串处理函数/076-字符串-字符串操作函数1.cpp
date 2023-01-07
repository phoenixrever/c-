#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char dst[128]="";
    char src[]="hello\0world";
    strcpy(dst,src);
    cout<<dst<<endl;//hello

    char dst1[]="";//dst1数组只有1字节 当src1拷贝到dst1中 造成溢出（内存污染）
    char src1[]="helloworld";
    strcpy(dst1, src1);
    cout<<dst1<<endl;//hello world(污染内存)
	return 0;
}