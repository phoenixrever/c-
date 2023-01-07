#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
class Person
{
    friend void test01();
    friend void printMapAll(map<int,Person> &m);
private:
    int num;
    string name;
    float score;
public:
    Person() {}
    Person(int num, string name, float score)
    {
        this->num = num;
        this->name = name;
        this->score = score;
    }
};

void printMapAll(map<int,Person> &m)
{
    map<int,Person>::const_iterator it=m.begin();
    for(;it!=m.end();it++)
    {
        //*it==pair<int,Person>
        cout<<(*it).first<<" "<<(*it).second.name<<" "<<(*it).second.score<<endl;
    }
}
int main()
{
    map<int,Person> m;
    //方式1
    m.insert(pair<int,Person>(103,Person(103,"lucy", 88.8f)));
    //方式2（推荐）
    m.insert( make_pair(101,Person(101,"bob", 88.8f)));
    //方式3：
    m.insert(  map<int,Person>::value_type(102,Person(102,"tom",66.6f)) );
    //方式4:(危险)
    m[104]=Person(104,"德玛",99.9f);

    printMapAll(m);

    //cout<<m[101].num<<" "<<m[101].name<<" "<<m[101].score<<endl;
    cout<<m[107].num<<" "<<m[107].name<<" "<<m[107].score<<endl;
    cout<<"-----------"<<endl;
    printMapAll(m);
	return 0;
}