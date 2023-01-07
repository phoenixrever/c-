#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>  v1;
    v1.push_back(10);
    v1.push_back(30);
    v1.push_back(20);
    v1.push_back(50);
    v1.push_back(40);

    //遍历该容器
    //定义一个迭代器iterator 保存起始迭代器
    vector<int>::iterator it=v1.begin();
    for(;it!=v1.end();it++)
    {
        //*it == int
        cout<<*it<<" ";
    }
    cout<<endl;

	return 0;
}