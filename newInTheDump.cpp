#include <iostream>
#include <string>
using namespace std;

/**
 * 内存空间
 * 栈区：
        由编译器自动分配释放, 存放函数的参数值,局部变量等
        注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放

    堆区：
        由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
        在C++中主要利用new在堆区开辟内存
 */


/**
 *  局部变量 存放在栈区，栈区的数据在函数执行完成后自动释放
 *  此处与下面new操作符     int* a = new int(10);  不同  这边是常量 由操作系统自动释放
 *  而new是在堆中由我们自己释放 new 返回的p指针在函数栈中
    已经回收了 但是 这个函数的返回地址 的值被main函数的另一个局部变量p 接受了（压入栈中）
     所以在main函数里面都可以使用
 * @return
 */
int * func1()
{
    int a = 10;
    return &a;
}

int* func2()
{
    //虽然局部变量的a 会释放 但是new的空间不会释放   返回的空间的地址 被main 函数里面的m接收了 重新压入栈中
    //小括号 创建一个元素10
    int * a = new int(10);

    return a;
}

/**
 *  C++中利用==new==操作符在堆区开辟数据
    堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符 ==delete==
    利用new创建的数据，会返回该数据对应的类型的指针
 */
int main(){
    int *p = func1();

    //第一次打印正确的数字是因为编译器做了保留，防止误操作 但是这个也要看编译器 vs 是这种情况
    //idea 直接就出错了
    //cout << *p << endl;//10
    //cout << *p << endl;//201010101 第二次就不在保留了

    int *m = func2();

    cout << *m << endl;

    //堆区数据由程序员管理开辟和释放
    //利用delete释放堆区数据
    delete p;

    //cout << *p << endl; //报错，已经释放（delete）的空间不可访问

    //中括号代表创建20个元素的数组
    int * arr=new int[20];
    //释放数组要这样写 告诉编辑器我要释放的是一个数组（连续的存储空间）
    delete[] arr;

    //引用
    //其实这样理解就好  这里不是 int &k  而是int & k 或者  int& k
    //声明一个应用变量 这个变量引用x的地址
    int x=10;
    int y=x; //仅仅是传值 又在内存中（函数中 局部变量 在栈中）给一段内存空间命名位y存在栈中  指向的内存空间的地址的值也为10
    int &k=x; //在栈中声明了一个变量k 且它的地址 指向x的地址
    cout<<"x: "<<x<<endl;
    cout<<"&x: "<<&x<<endl;
    cout<<"y: "<<y<<endl;
    cout<<"&y: "<<&y<<endl;
    cout<<"k: "<<k<<endl;
    cout<<"&k: "<<&k<<endl;

    return 0;
}