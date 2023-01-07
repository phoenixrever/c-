#include <iostream>
using namespace std;
int main()
{
    int num = 0x01020304;
    int *p1 = &num;
    cout<<hex<<*p1<<endl;//0x01020304
    short *p2 = (short *)&num;
    cout<<hex<<*p2<<endl;//0x0304
    char *p3 = (char *)&num;
    cout<<hex<<(int)(*p3)<<endl;//0x04
	return 0;
}