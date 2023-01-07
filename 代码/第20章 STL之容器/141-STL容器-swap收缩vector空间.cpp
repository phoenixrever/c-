#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    v1.reserve(1000);
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    cout<<"容量:"<<v1.capacity()<<", 大小:"<<v1.size()<<endl;//1000 4
    //resize只能修改大小 不能修改容量
    //v1.resize(4);
    vector<int>(v1).swap(v1);
    cout<<"容量:"<<v1.capacity()<<", 大小:"<<v1.size()<<endl;//4 4
	return 0;
}