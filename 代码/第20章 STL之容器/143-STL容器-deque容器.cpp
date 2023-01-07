#include <iostream>
#include <deque>
using namespace std;
void printDequeInt(deque<int> &d)
{
    deque<int>::iterator it=d.begin();
    for(;it!=d.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test01()
{
    deque<int> d1;
    d1.push_back(1);
    d1.push_back(2);
    d1.push_back(3);
    d1.push_front(4);
    d1.push_front(5);
    d1.push_front(6);
    printDequeInt(d1);//6 5 4 1 2 3
    cout<<"大小："<<d1.size()<<endl;
    d1.pop_front();
    printDequeInt(d1);//5 4 1 2 3
    d1.pop_back();
    printDequeInt(d1);//5 4 1 2

    d1.insert( d1.begin()+1, 3, 100 );
    printDequeInt(d1);//5 100 100 100 4 1 2
}
#include<vector>
#include<algorithm>
class Person
{
public:
    string name;
    float score;
public:
    Person(){}
    Person(string name, float score)
    {
        this->name = name;
        this->score = score;
    }
};
void createPerson(vector<Person> &v)
{
    string tmpName="ABCDE";
    int i=0;
    for(i=0;i<5;i++)
    {
        string name="选手";
        name+=tmpName[i];
        v.push_back(Person(name, 0.0f));
    }
}
void showPerson(vector<Person> &v)
{
    vector<Person>::iterator it=v.begin();
    for(;it!=v.end();it++)
    {
        //*it == Person
        cout<<(*it).name<<" "<<(*it).score<<endl;
        //cout<<it->name<<" "<<it->score<<endl;
    }
}
void playGame(vector<Person> &v)
{
    //每人逐个比赛
    vector<Person>::iterator it=v.begin();
    for(;it!=v.end();it++)
    {
        //定义一个deque容器存放10个评委的分数
        deque<float> d;
        int i=0;
        for(i=0;i<10;i++)
        {
            d.push_back( (float)(rand()%41+60));
        }

        //对deque排序
        sort(d.begin(), d.end());

        //去掉最高分和最低分
        d.pop_back();
        d.pop_front();

        //求平局分
        (*it).score = (float)accumulate(d.begin(),d.end(), 0)/d.size();
    }
}
#include<time.h>
void test02()
{
    vector<Person> v;
    //srand设置随机数种子
    srand(time(NULL));

    //创建无名选手
    createPerson(v);

    //比赛
    playGame(v);

    //显示选手的成绩
    showPerson(v);
}
int main(int argc, char *argv[])
{
    test02();
    return 0;
}
