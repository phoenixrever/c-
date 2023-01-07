#include <iostream>
#include <vector>
using namespace std;
void printVectorInt(vector<int> &v)
{
    vector<int>::iterator it=v.begin();
    for(;it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v1(5,100);
    printVectorInt(v1);

    vector<int> v2(v1.begin(), v1.end());
    printVectorInt(v2);

    vector<int> v3;
    //v3=v2;
    //v3.assign(v2.begin(), v2.end());
    v3.assign(10,10);
    printVectorInt(v3);

    v3.swap(v2);
    printVectorInt(v2);
    printVectorInt(v3);

    vector<int> v4;
    if(v4.empty())
    {
        cout<<"空"<<endl;
    }
    else
    {
        cout<<"非空"<<endl;
    }

    vector<int> v5(10,30);
    cout<<"容量:"<<v5.capacity()<<", 大小:"<<v5.size()<<endl;
    printVectorInt(v5);
    //v5.resize(15);//过大 补零
    //v5.resize(15, 2);//过大 补2
    v5.resize(5);//过小删除多的部分
    printVectorInt(v5);
	return 0;
}