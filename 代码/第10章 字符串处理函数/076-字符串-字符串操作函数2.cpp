#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char dst[128]="hello";
    char src[]="world";
    strcat(dst,src);
    cout<<dst<<endl;//helloworld
	return 0;
}