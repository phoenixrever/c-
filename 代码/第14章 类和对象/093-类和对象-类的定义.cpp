#include <iostream>
#include <string.h>
using namespace std;
class Person
{
private:
    char mName[32];
    int mAge;
public:
    //初始化函数
    void personInit(char *name, int age)
    {
        strcpy(mName, name);
        if(age>0 && age<=100)
        {
            mAge = age;
        }
        else
        {
            cout<<"输入的年龄:"<<age<<"不合法"<<endl;
        }
    }

    //设置mAge
    void setAge(int age)
    {
        if(age>0 && age<=100)
        {
            mAge = age;
        }
        else
        {
            cout<<"输入的年龄:"<<age<<"不合法"<<endl;
        }
    }
    //得到mAge
    int getAge(void)
    {
        return mAge;
    }

    //设置mName
    void setName(char *name)
    {
        strcpy(mName, name);
    }
    //得到mName
    char *getName(void)
    {
        return mName;
    }
    //显示年龄和姓名
    void showPerson()
    {
        cout<<"姓名:"<<mName<<", 年龄:"<<mAge<<endl;
    }
};
int main(int argc, char *argv[])
{
    Person lucy;
    lucy.personInit("lucy", 18);

    lucy.setName("tom");
    lucy.setAge(16);

    cout<<lucy.getName()<<" "<<lucy.getAge()<<endl;
    lucy.showPerson();

    return 0;
}
