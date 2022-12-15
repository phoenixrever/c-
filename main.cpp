#include <iostream>
#include <bitset>

using namespace std;

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


    //==================================整形变量=================================


    //0 代表成功
    return 0;


}
