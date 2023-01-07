#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1(5,10);
    vector<int> v2(5,100);
    vector<int> v3(5,1000);

    //需求：定义一个vector容器存放v1 v2 v3
    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    //遍历
    vector< vector<int> >::iterator it=v.begin();
    for(;it!=v.end();it++)
    {
        //*it ==vector<int>
        vector<int>::iterator mit=(*it).begin();
        for(;mit!=(*it).end();mit++)
        {
            cout<<*mit<<" ";
        }
        cout<<endl;
    }
	return 0;
}