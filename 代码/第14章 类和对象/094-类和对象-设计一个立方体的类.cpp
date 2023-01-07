#include <iostream>

using namespace std;
class Cube
{
  private:
    int mL;
    int mW;
    int mH;
public:
    void cubeInit(int l,int w,int h)
    {
        mL = l;
        mW = w;
        mH = h;
    }
    int getL(void)
    {
        return mL;
    }
    int getW(void)
    {
        return mW;
    }
    int getH(void)
    {
        return mH;
    }

    int getS(void)
    {
        return (mL*mW+mL*mH+mW*mH)*2;
    }

    int getV(void)
    {
        return mL*mW*mH;
    }

    //成员函数实现比较
    bool cubeCompare02(Cube &ob)
    {
        if(mL==ob.mL && mH==ob.mH && mW==ob.mW)
        {
            return true;
        }
        return false;
    }
};

//全局函数实现 立方体的比较
bool cubeCompare01(Cube &ob1, Cube &ob2)
{
    if(ob1.getH() == ob2.getH() && ob1.getL()==ob2.getL()&&ob1.getW()==ob2.getW())
    {
        return true;
    }
    return false;
}
int main(int argc, char *argv[])
{

    Cube ob1;
    ob1.cubeInit(10,20,30);
    cout<<"面积:"<<ob1.getS()<<endl;
    cout<<"体积:"<<ob1.getV()<<endl;

    Cube ob2;
    ob2.cubeInit(10,20,30);

    //全局函数实现比较
    if(cubeCompare01(ob1, ob2))
    {
        cout<<"相等"<<endl;
    }
    else
    {
        cout<<"不相等"<<endl;
    }

    //成员函数实现比较
    if(ob1.cubeCompare02(ob2))
    {
        cout<<"相等"<<endl;
    }
    else
    {
        cout<<"不相等"<<endl;
    }

    return 0;
}
