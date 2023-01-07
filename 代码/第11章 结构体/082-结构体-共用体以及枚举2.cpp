#include <iostream>
using namespace std;
enum POKER_COLOR{HONGTAO,MEIHUA=10,FANGKUAI,HEITAO};
int main()
{
    POKER_COLOR pc = HONGTAO;

    cout<<HONGTAO<<" "<<MEIHUA<<" "<<FANGKUAI<<" "<<HEITAO<<endl;
	return 0;
}