#include <iostream>
using namespace std;
int main()
{
    int i=0;
    for(i=1;i<=9;i++)
    {
        int j=0;
        for(j=1;j<=i;j++)
        {
            cout<<j<<"*"<<i<<"="<<j*i<<" ";
        }
        cout<<endl;
    }
	return 0;
}