#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void printListInt(list<int> &l)
{
    list<int>::iterator it=l.begin();
    for(;it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test01()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_front(40);
    l1.push_front(50);
    l1.push_front(60);

    printListInt(l1);//60 50 40 10 20 30

    //list容器的迭代器是双向迭代器  不支持+2(随机访问迭代器支持)  支持++
    list<int>::iterator it=l1.begin();
    //it+2;
    it++;
    it++;
    l1.insert(it, 3, 100);
    printListInt(l1);//60 50 100 100 100 40 10 20 30

    //STL提供的算法 只支持随机访问迭代器 而list是双向迭代器 所以sort不支持list
    //sort(l1.begin(), l1.end());
    l1.sort();
    printListInt(l1);//10 20 30 40 50 60 100 100 100
    l1.reverse();
    printListInt(l1);
}

#include<set>
void printSetInt(set<int>  &s)
{
    set<int>::const_iterator it=s.begin();
    for(;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

//仿函数：重载函数调用运算符()的类
class MyGreater
{
public:
    bool operator()(int v1, int v2)
    {
        return v1>v2;
    }
};

void printSetInt(set<int,MyGreater>  &s)
{
    set<int,MyGreater>::const_iterator it=s.begin();
    for(;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test02()
{
    //set<int,排序规则 > s1;
    set<int,MyGreater> s1;
    s1.insert(30);
    s1.insert(10);
    s1.insert(20);
    s1.insert(50);
    s1.insert(40);
    printSetInt(s1);

}

int main(int argc, char *argv[])
{
    test01();
    return 0;
}
