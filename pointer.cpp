#include <iostream>

using namespace std;
void  pointerAndArr();
void bubbleSort(int * arr, int len);
void printArray(int arr[], int len);
int main() {
    //============指针变量的定义 指针变量定义语法： `数据类型 * 变量名；`===================
    //1、指针的定义
    int a = 10; //定义整型变量a
    int b = 20;
    int c = 30;
    //指针定义语法： 数据类型 * 变量名 ;
    int *p;
    int *x;
    int *y;

    //指针变量赋值
    p = &a; //指针指向变量a的地址
    x = &b;
    y = &c;
    cout << &a << endl; //打印数据a的地址
    cout << p << endl;  //打印指针变量p

    //2、指针的使用
    //通过*操作指针变量指向的内存
    cout << "*p = " << *p << endl;
    cout << "*x = " << *x << endl;
    cout << "*y = " << *y << endl;


    //------------------------------ 空指针---野指针----------------------------------------------
    /**
     * 空指针：指针变量指向内存中编号为0的空间
     * 用途：初始化指针变量
     * 注意：空指针指向的内存是不可以访问的
     *
     * 空指针和野指针都不是我们申请的空间，因此不要访问
     */

    //指针变量p指向内存地址编号为0的空间
    int *n = NULL;

    //访问空指针报错
    //内存编号0 ~255为系统占用内存，不允许用户访问
    //下面的代码都不会运行了 异常退出 finished with exit code -1073741819 (0xC0000005)
    //cout << *n << endl;

    /**
     * 野指针：指针变量指向非法的内存空间
     */
    //指针变量p指向内存地址编号为0x1100的空间
    int * m = (int *)0x1100;

    //访问野指针报错 下面的代码都不会运行了 异常退出
    //cout << *m << endl;


    //==========================const修饰指针==================================

    /**
     *  const修饰指针有三种情况
            1. const修饰指针 --- 常量指针
            2. const修饰常量 --- 指针常量
            3. const即修饰指针，又修饰常量
     */


    int q = 10;
    int w = 10;

    //const修饰的是指针，指针指向(指针地址)可以改，指针指向的值（解引用 内存上的实际值）不可以更改
    //简单来说就是 cont 修饰的是 *p （解引用 内存上的实际值）指针本身地址不关心 可以改
    const int * p1 = &q;
    p1 = &w; //正确
    //*p1 = 100;  报错


    //const修饰的是常量，指针指向不可以改，指针指向的值可以更改
    //cont 修饰的是指针地址 不能改 这个地址上的值却可以改
    int * const p2 = &q;
    //p2 = &w; //错误
    *p2 = 100; //正确

    //const既修饰指针又修饰常量
    const int * const p3 = &q;
    //p3 = &w; //错误
    //*p3 = 100; //错误

    //指针和数组
    pointerAndArr();

    int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
    int len = sizeof(arr) / sizeof(int);

    bubbleSort(arr, len);

    printArray(arr, len);

    return 0;
}

/**
 * 指针和数组
 */
void  pointerAndArr(){
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

    int * p = arr;  //指向数组的指针

    cout << "==================指针和数组==================="  << endl;
    cout << "第一个元素： " << arr[0] << endl;
    cout << "指针访问第一个元素： " << *p << endl;
    cout << "指针访问第一个元素： " << *arr << endl;
    //指针向后偏移4个字节(32位 64位指针是8个字节)
    cout << "指针访问第二个元素： " << *(arr+1) << endl;

    for (int i = 0; i < 10; i++)
    {
        //利用指针遍历数组
        cout << *p << endl;
        p++;
    }
}

//
//冒泡排序函数
void bubbleSort(int * arr, int len)  //int * arr 也可以写为int arr[]
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//当数组名传入到函数作为参数时，被退化为指向首元素的指针
void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}
