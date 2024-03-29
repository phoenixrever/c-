﻿#include <iostream>
#include <bitset>

using namespace std;

//==================================GNU的编译顺序=================================
//全局变量
//对于全局变量  GNU 默认自上而下编译 所以 方法和变量必须先在上面定义才能在下面使用
//想改变这样情况让编译器不报错就必须事先声明
/**
 * extern可以置于变量或者函数前，以标示变量或者函数的定义在别的文件中，
 * 提示编译器遇到此变量和函数时在其他模块中寻找其定义
 *
 * 先声明下占个位置 后面在初始化 主要用于跨文件编程
 */
extern int globle;

//*argv[] 指针数组
int main(int args,char *argv[]) {
    cout << "Hello, World! openCV的开始" << endl <<"endl 相当于换行"<< endl ;

    //==================================整形常量=================================
    //所有输出都是10进制
    //10进制
    cout<<0b00001010<<endl;
    //8进制
    cout<<0123<<endl;
    //16进制
    cout<<0x1e<<endl;

    //加上 bitset（需要头文件） oct 与hex
    //10进制 这个用法与其他不一样
    cout<<bitset<8>(0b00001010)<<endl;
    //8进制 下面2个直接在流上加一层就行了
    cout<<oct<<0123<<endl;
    //16进制
    cout<<hex<<0x1e<<endl;
    //注意 恢复十进制输出状态 不然下面还是hex 16进制
    cout<<dec<<endl;


    //==================================整形变量=================================
    //能否定义变量 就算是开能否为这个变量在内存中开辟空间
    /**
     * 系统为改变量开辟空间，空间大小为改变量大小
     * 对变量名的操作代等价于对空间的操作
     * short 2字节 long 4字节 （32位  64 位翻倍）
     */
    //总结： 变量的意义就是为内存空间起名，方便操作这段内存

    //区分大小写
    int Data=0;

    //局部变量 根据不同的ide   基础变量初始化值各不相同 idea 默认给0
    int a = 0;
    cout<<"a="<<a<<endl;

    //全部变量基本都是0 在内存中存储的区域不同
    //真正的定义在main函数下面
    cout<<"globle="<<globle<<endl; //10

    char s='a';
    cin>>s;
    cout<<"s:"<<s<< endl;

    system("pause");
    //0 代表成功
    return 0;
}

int globle=9999;
