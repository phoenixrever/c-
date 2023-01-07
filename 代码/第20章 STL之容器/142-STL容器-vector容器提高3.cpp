#include <iostream>
#include <vector>
using namespace std;
#include<string>
class Person
{
    friend bool comparePerson(Person &ob1, Person &ob2);
    friend void printVectorPerson(vector<Person> &v);
private:
    int num;
    string name;
    float score;
public:
    Person(){}
    Person(int num,string name, float score)
    {
        this->num = num;
        this->name = name;
        this->score = score;
    }
};
void printVectorPerson(vector<Person> &v)
{
    vector<Person>::iterator it=v.begin();
    for(;it!=v.end();it++)
    {
        //*it==Person
        cout<<(*it).num<<" "<<(*it).name<<" "<<(*it).score <<endl;
    }
}

bool comparePerson(Person &ob1, Person &ob2)
{
    return ob1.num < ob2.num;
}

int main()
{
    vector<Person> v1;
    v1.push_back(Person(100,"lucy", 77.7f));
    v1.push_back(Person(103,"bob", 77.7f));
    v1.push_back(Person(101,"tom", 77.7f));
    v1.push_back(Person(104,"德玛", 77.7f));
    v1.push_back(Person(105,"小法", 77.7f));

    printVectorPerson(v1);

    //对自定义类型的vector排序 需要指定排序规则
    sort(v1.begin(), v1.end(), comparePerson);

    printVectorPerson(v1);

	return 0;
}