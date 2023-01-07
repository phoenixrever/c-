#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
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

class MyGreaterPerson;
class Person
{
    friend class MyGreaterPerson;
    friend void printSetPerson(set<Person, MyGreaterPerson> &s);
private:
    int num;
    string name;
    float score;
public:
    Person(){}
    Person(int num, string name, float score)
    {
        this->num = num;
        this->name = name;
        this->score = score;
    }

};
class MyGreaterPerson
{
public:
    bool operator()(Person ob1, Person ob2)
    {
        return ob1.num < ob2.num;
    }
};
void printSetPerson(set<Person, MyGreaterPerson> &s)
{
    set<Person, MyGreaterPerson>::const_iterator it=s.begin();
    for(;it!=s.end();it++)
    {
        //*it==Person
        cout<<(*it).num<<" "<<(*it).name<<" "<<(*it).score<<endl;
    }
}
void test03()
{
    //set存放自定义数据必须修改排序
    set<Person, MyGreaterPerson> s;
    s.insert(Person(100,"lucy", 88.8f));
    s.insert(Person(103,"tom", 88.8f));
    s.insert(Person(105,"bob", 88.8f));
    s.insert(Person(104,"德玛", 88.8f));
    s.insert(Person(102,"小法", 88.8f));
    printSetPerson(s);

}
void test04()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(50);
    s1.insert(70);
    s1.insert(90);
    printSetInt(s1);

    set<int>::const_iterator ret;
    ret = s1.find(50);
    if(ret != s1.end())
    {
        cout<<"找到的结果为:"<<*ret<<endl;
    }

    cout<<s1.count(50)<<endl;
}
int main()
{
	test02();
	return 0;
}