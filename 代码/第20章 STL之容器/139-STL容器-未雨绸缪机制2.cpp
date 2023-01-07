#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    //事先预留足够的空间
    v1.reserve(1000);
    cout<<"容量:"<<v1.capacity()<<" 大小:"<<v1.size()<<endl;

    vector<int>::iterator it;

    int i=0;
    int count =0;

    for(i=0;i<1000;i++)
    {
        v1.push_back(i);
        if(it != v1.begin())
        {
            count++;
            cout<<"第"<<count<<"次开辟空间容量:"<<v1.capacity()<<endl;
            it=v1.begin();
        }
    }
	return 0;
}