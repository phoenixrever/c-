#include <iostream>
#include <bitset>
using namespace std;

int main(int argc, char *argv[])
{
    //cout默认以十进制输出
    cout<<0b00001010<<endl;//10
    cout<<0123<<endl;//83
    cout<<0xab<<endl;//171

    //cout需要使用bitset<位数>(数值),位数一般都是8、16、32
    cout<<bitset<8>(0b00001010)<<endl;//00001010
    //cout需要使用oct输出八进制
    cout<<oct<<0123<<endl;//123
    //cout需要使用hex输出十六进制
    cout<<hex<<0xab<<endl;
    return 0;
}
