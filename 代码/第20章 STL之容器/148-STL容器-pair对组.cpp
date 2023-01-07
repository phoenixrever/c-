#include <iostream>
#include <list>
#include <algorithm>
#include<set>
using namespace std;
void test05()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(50);
    s1.insert(70);
    s1.insert(90);
    set<int>::const_iterator ret;
    ret = s1.lower_bound(50);
    if(ret!=s1.end())
    {
        cout<<"下限为:"<<*ret<<endl;
    }
    ret = s1.upper_bound(50);
    if(ret!=s1.end())
    {
        cout<<"上限为:"<<*ret<<endl;
    }

    //以对组的方式 存储上下限 pair
    pair< set<int>::const_iterator , set<int>::const_iterator> pa;
    pa = s1.equal_range(50);
    if(pa.first != s1.end())
    {
        cout<<"下限为:"<<*(pa.first)<<endl;
    }
    if(pa.second != s1.end())
    {
        cout<<"上限为:"<<*(pa.second)<<endl;
    }
}

void test06()
{
    multiset<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(10);
    s1.insert(70);
    s1.insert(10);

    multiset<int>::const_iterator it=s1.begin();
    for(;it!=s1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

}

void test07()
{
    //方式一:
    pair<int, string> p1(10086,"移动");
    pair<int, string> p2(10010,"联通");
    pair<int, string> p3(10000,"典型");

    //方式二:(推荐)
    pair<int, string> p4=make_pair(9527,"星爷");

    cout<<p4.first<<" "<<p4.second<<endl;

}


int main(int argc, char *argv[])
{
    test07();
    return 0;
}