#include <iostream>
#include "myarray.hpp"
#include <string>
using namespace std;
class Person
{
    friend ostream& operator<<(ostream &out, Person ob);
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

    bool operator>(Person ob)
    {
        return num>ob.num;
    }
};

ostream& operator<<(ostream &out, Person ob)
{
    cout<<ob.num<<" "<<ob.name<<" "<<ob.score<<endl;
}
int main(int argc, char *argv[])
{
    MyArray<int> arr1;
    arr1.pushBack(30);
    arr1.pushBack(50);
    arr1.pushBack(20);
    arr1.pushBack(10);
    arr1.pushBack(40);
    arr1.sortArray();
    cout<<arr1<<endl;

    MyArray<char> arr2;
    arr2.pushBack('C');
    arr2.pushBack('D');
    arr2.pushBack('B');
    arr2.pushBack('F');
    arr2.pushBack('A');
    arr2.sortArray();
    cout<<arr2<<endl;

    MyArray<Person> arr3;
    arr3.pushBack(Person(100,"lucy", 88.8f));
    arr3.pushBack(Person(103,"bob", 98.8f));
    arr3.pushBack(Person(102,"tom", 78.8f));
    arr3.sortArray();
    cout<<arr3<<endl;

    return 0;
}
