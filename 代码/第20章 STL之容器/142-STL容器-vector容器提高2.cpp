#include <iostream>
#include <vector>
using namespace std;

//使用STL算法对vector容器排序
#include<algorithm>
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
    v1.push_back(20);
    v1.push_back(60);
    v1.push_back(50);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(10);
    printVectorInt(v1);

    //排序算法
    sort(v1.begin(), v1.end());
    printVectorInt(v1);
	return 0;
}