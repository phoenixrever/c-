#include<iostream>
#include<string.h>
using namespace std;
class Animal
{
public:
	int data;
};
class Sheep :virtual public Animal {
};
class Tuo :virtual public Animal {
};
class SheepTuo :public Sheep, public Tuo {};
int main()
{
	SheepTuo ob;
	cout << ob.data << endl;
	return 0;
}