#include <iostream>

using namespace std;
int main()
{
    int data = 0;
    cin>>data;

    if(data%3 == 0)
    {
        cout<<data<<"对3的余数为0"<<endl;
    }
    else if(data%3 == 1)
    {
        cout<<data<<"对3的余数为1"<<endl;
    }
    else if(data%3 == 2)
    {
        cout<<data<<"对3的余数为2"<<endl;
    }
	return 0;
}