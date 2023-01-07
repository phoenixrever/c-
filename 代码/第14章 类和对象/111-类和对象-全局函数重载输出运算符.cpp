#include <iostream>
#include <string>
using namespace std;
class Person
{
    friend ostream& operator<<(ostream &out, Person ob);
    friend istream& operator>>(istream &in, Person &ob);
private:
    int num;
    string name;
    float score;
public:
    Person(){}
    Person(int num,string name,float score):num(num),name(name),score(score){}
    //成员函数重载+运算符
    Person operator+(Person &ob)
    {
        Person tmp;
        tmp.num = num+ob.num;
        tmp.name = name+ob.name;
        tmp.score = score+ob.score;
        return tmp;
    }

    //成员函数重载==运算符
    bool operator==(Person &ob)
    {
        if(num==ob.num && name==ob.name && score==ob.score)
            return true;
        return false;
    }

    //重载后置++
    Person operator++(int)
    {
        //保存旧值
        Person old = *this;
        //++
        this->num++;
        this->name= this->name+this->name;
        this->score++;

        //返回值旧值
        return old;
    }

    //重载前置++
    Person operator++()
    {
        //++
        this->num++;
        this->name= this->name+this->name;
        this->score++;

        return *this;
    }
};

//全局函数重载operator<<
ostream& operator<<(ostream &out, Person ob)
{
    out<<ob.num<<" "<<ob.name<<" "<<ob.score<<endl;
    return out;
}
//全局函数重载operator>>
istream& operator>>(istream &in, Person &ob)
{
    in>>ob.num>>ob.name>>ob.score;
    return in;
}

int main(int argc, char *argv[])
{

    Person lucy(100,"lucy", 88.8);
    Person bob;

    bob = ++lucy;
    cout<<bob<<endl;
    cout<<lucy<<endl;

    return 0;
}
