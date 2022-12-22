#include <iostream>
#include <string>
using namespace std;

/**
 * 结构体属于用户==自定义的数据类型==，允许用户存储不同的数据类型
 *  > 总结1：定义结构体时的关键字是struct，不可省略
    > 总结2：创建结构体变量时，关键字struct可以省略
    > 总结3：结构体变量利用操作符 ''.'' 访问成员
 */
//结构体定义
struct student {
    //成员列表
    string name;  //姓名
    int age;      //年龄
    int score;    //分数
} stu3; //结构体变量创建方式3


//const使用场景  用const来防止误操作
void printStudent(const student *stu) //加const防止函数体中的误操作
{
    //stu->age = 100; //操作失败，因为加了const修饰
    cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;

}

int main() {
    //结构体变量创建方式1
    struct student stu1; //struct 关键字可以省略

    stu1.name = "张三";
    stu1.age = 18;
    stu1.score = 100;

    cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;

    //结构体变量创建方式2
    struct student stu2 = {"李四", 19, 60};

    cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;


    stu3.name = "王五";
    stu3.age = 18;
    stu3.score = 80;


    cout << "姓名：" << stu3.name << " 年龄：" << stu3.age << " 分数：" << stu3.score << endl;


    //===========结构体数组============
    struct student arr[3] =
            {
                    {"张三", 18, 80},
                    {"李四", 19, 60},
                    {"王五", 20, 70}
            };

    for (int i = 0; i < 3; i++) {
        cout << "姓名：" << arr[i].name << " 年龄：" << arr[i].age << " 分数：" << arr[i].score << endl;
    }


    //===========结构体指针============
    /**
     * 作用：通过指针访问结构体中的成员
         利用操作符 `-> `可以通过结构体指针访问结构体属性
     */
    struct student stu = {"张三", 18, 100,};

    struct student *p = &stu;

    p->score = 80; //指针通过 -> 操作符可以访问成员

    cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;


    //================结构体嵌套结构体===================
    //学生结构体定义
    struct student {
        //成员列表
        string name;  //姓名
        int age;      //年龄
        int score;    //分数
    };

    //教师结构体定义
    struct teacher {
        //成员列表
        int id; //职工编号
        string name;  //教师姓名
        int age;   //教师年龄
        struct student stu; //子结构体 学生
    };

    struct teacher t1;
    t1.id = 10000;
    t1.name = "老王";
    t1.age = 40;

    t1.stu.name = "张三";
    t1.stu.age = 18;
    t1.stu.score = 100;
    cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;

    cout << "辅导学员 姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;




    return 0;
}