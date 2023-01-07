#include <iostream>
#include "data.h"
using namespace std;

int main(int argc, char *argv[])
{
    Data ob;
    ob.setA(100);
    cout<<"mA = "<<ob.getA()<<endl;
    return 0;
}
