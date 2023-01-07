#include <iostream>
using namespace std;
int main()
{
    cout<<"-----001------"<<endl;
    cout<<"-----002------"<<endl;
    goto here;
    cout<<"-----003------"<<endl;
    cout<<"-----004------"<<endl;
    here:
    cout<<"-----005------"<<endl;
	return 0;
}