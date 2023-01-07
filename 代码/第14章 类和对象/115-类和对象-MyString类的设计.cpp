#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class MyString
{
    friend ostream& operator<<(ostream &out, MyString ob);
    friend istream& operator>>(istream &in, MyString &ob);
private:
    char *str;
    int size;
public:
    MyString();
    MyString(char *str);
    MyString(const MyString &ob);
    ~MyString();
    int getSize();

    //成员函数重载[]运算符
    char& operator[](int pos);

    //重载+运算符
    MyString operator+(MyString &ob);
    MyString operator+(char *str);

    //重载赋值运算符（只有指针成员operator=必须深拷贝）
    MyString& operator=(MyString ob);
    MyString& operator=(char *str);

    //重载关系运算符>
    bool operator>(MyString ob);
    bool operator>(char *str);



};
//全局函数重载<<运算符
ostream& operator<<(ostream &out, MyString ob)
{
    out<<ob.str;
    return out;
}

istream& operator>>(istream &in, MyString &ob)
{
    char buf[128]="";
    cin>>buf;

    //判断ob.str是否为NULL
    if(ob.str != NULL)
    {
        delete [] ob.str;
        ob.str=NULL;
    }

    ob.size = strlen(buf);
    ob.str = new char[ob.size+1];
    memset(ob.str, 0, ob.size+1);
    strcpy(ob.str, buf);

    return in;
}
int main(int argc, char *argv[])
{
    MyString str1="hello";
    str1[1]='H';
    cout<<str1[1]<<endl;
    cout<<str1<<endl;

    MyString str2;
    cin>>str2;
    cout<<str2<<endl;
    
    MyString str3 = "hello";
    MyString str4 = "world";
    cout<<str3+str4<<endl;
    cout<<str3+"world"<<endl;

    MyString str5="hello world";
    MyString str6="world";
    str6 = str5;
    cout<<str6<<endl;
    str6="hello str6";
    cout<<str6<<endl;

    if(str5 > str6)
    {
        cout<<"大于"<<endl;
    }
    else
    {
        cout<<"不大于"<<endl;
    }

    return 0;
}

MyString::MyString()
{
    str=NULL;
    size=0;
}

MyString::MyString(char *str)
{
    this->str = new char[strlen(str)+1];
    memset(this->str,0,strlen(str)+1);
    size = strlen(str);
    strcpy(this->str,str);
}

MyString::MyString(const MyString &ob)
{
    size = ob.size;
    str = new char[size+1];
    memset(str,0,size+1);
    strcpy(str,ob.str);
}

MyString::~MyString()
{
    if(str != NULL)
    {
        delete [] str;
        str=NULL;
    }
}

int MyString::getSize()
{
    return size;
}

char& MyString::operator[](int pos)
{
    if(pos<0 || pos>=size)
    {
        cout<<"下标越界"<<endl;
        exit(-1);
    }

    return str[pos];
}

MyString MyString::operator+(MyString &ob)
{
    MyString tmp;
    tmp.size = this->size+ob.size;
    tmp.str = new char[tmp.size +1];
    memset(tmp.str, 0, tmp.size+1);

    strcpy(tmp.str, this->str);
    strcat(tmp.str, ob.str);

    return tmp;
}

MyString MyString::operator+(char *str)
{
    MyString tmp;
    tmp.size = this->size+strlen(str);
    tmp.str = new char[tmp.size +1];
    memset(tmp.str, 0, tmp.size+1);

    strcpy(tmp.str, this->str);
    strcat(tmp.str, str);

    return tmp;
}

MyString &MyString::operator=(MyString ob)
{
    //str5=str4
    if(str != NULL)
    {
        delete [] str;
        str=NULL;
    }

    size = ob.size;
    str = new char[size+1];
    memset(str, 0,size+1);
    strcpy(str, ob.str);

    return *this;
}

MyString &MyString::operator=(char *str)
{
    //str5=str4
    if(this->str != NULL)
    {
        delete [] this->str;
        this->str=NULL;
    }

    size = strlen(str);
    this->str = new char[size+1];
    memset(this->str, 0,size+1);
    strcpy(this->str, str);

    return *this;
}

bool MyString::operator>(MyString ob)
{
    if(str==NULL || ob.str == NULL)
    {
        exit(-1);
    }
    if(strcmp(str, ob.str) > 0)
        return true;
    return false;
}

bool MyString::operator>(char *str)
{
    if(this->str==NULL || str == NULL)
    {
        exit(-1);
    }
    if(strcmp(this->str, str) > 0)
        return true;
    return false;
}
