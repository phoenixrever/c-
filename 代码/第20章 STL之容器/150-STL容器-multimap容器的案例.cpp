#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <time.h>
using namespace std;
class Employee
{
    friend void employeeJoinDepartment(vector<Employee> &v, multimap<int, Employee> &m);
    friend void showDepartmentEmployee(multimap<int, Employee> &m);
private:
    string name;
    int age;
    int money;
    string tel;
public:
    Employee(){}
    Employee(string name, int age, int money, string tel)
    {
        this->name = name;
        this->age = age;
        this->money = money;
        this->tel = tel;
    }
};
void createVectorEmployee(vector<Employee> &v)
{
    //设置随机数种子
    int i=0;
    for(i=0;i<5;i++)
    {
        string seedName="ABCDE";
        string tmpName="员工";
        tmpName+=seedName[i];
        int age=20+i;
        int money = 15000+rand()%10*1000;
        string tel = to_string(rand());

        v.push_back(Employee(tmpName,age,money,tel));
    }
}
void employeeJoinDepartment(vector<Employee> &v, multimap<int, Employee> &m)
{
    vector<Employee>::iterator it=v.begin();
    for(;it!=v.end();it++)
    {
        //*it = Employee
        cout<<"请输入["<<(*it).name<<"]加入的部门0(销售)、1(研发)、2(财务):";
        int op=0;
        cin>>op;

        m.insert(make_pair(op, *it) );
    }
}
void showDepartmentEmployee(multimap<int, Employee> &m)
{
    cout<<"请输入你要显示的部门0(销售)、1(研发)、2(财务):";
    int op=0;
    cin>>op;
    switch (op) {
    case 0:
        cout<<"-----------销售部门员工如下---------------"<<endl;
        break;
    case 1:
        cout<<"-----------研发部门员工如下---------------"<<endl;
        break;
    case 2:
        cout<<"-----------财务部门员工如下---------------"<<endl;
        break;
    }

    //寻找op的位置
    multimap<int, Employee>::const_iterator ret;
    ret = m.find(op);
    if(ret == m.end())
        return;
    //统计op的个数
    int count = m.count(op);

    //从op的位置 按照个数 逐个变量
    int i=0;
    for(i=0;i<count;i++,ret++)
    {
        //*ret == pair<int, Employee>
        cout<<"\t"<<(*ret).second.name<<" "<<(*ret).second.age<<" "\
           <<(*ret).second.money<<" "<<(*ret).second.tel<<endl;
    }
}
int main()
{
    //创建5名员工 存放在vector
    vector<Employee> v;
    createVectorEmployee(v);

    //5名员工加入部门
    multimap<int, Employee> m;
    employeeJoinDepartment(v, m);

    //显示部门员工
    showDepartmentEmployee(m);
	return 0;
}