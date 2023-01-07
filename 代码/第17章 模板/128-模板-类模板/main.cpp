#include <iostream>
#include "data.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    Data<int,int> ob1(10,20);
    ob1.showData();
    return 0;
}
