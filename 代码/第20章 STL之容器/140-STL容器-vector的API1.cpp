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
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);//10 20 30 40 50

    cout<<"头元素:"<<v1.front()<<", 尾元素:"<<v1.back()<<endl;
    //at越界会抛出异常 []越界不会抛出异常
    cout<<v1[1]<<" "<<v1.at(1)<<endl;
    v1.at(1)=200;
    v1[3]=300;
    printVectorInt(v1);//10 200 30 300 50

    //尾部删除
    v1.pop_back();
    printVectorInt(v1);//10 200 30 300
    v1.insert( v1.begin()+2, 3,500 );
    printVectorInt(v1);//10 200 500 500 500 30 300
    v1.erase(v1.begin()+2, v1.begin()+5);
    printVectorInt(v1);//10 200 30 300

    v1.clear();
    printVectorInt(v1);
    cout<<"容量:"<<v1.capacity()<<", 大小:"<<v1.size()<<endl;
	return 0;
}
