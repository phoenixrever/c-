#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <deque>
#include <time.h>
#include <algorithm>
using namespace std;
class Player
{
    friend void playGame(int index,vector<int> &v,map<int, Player> &m,vector<int> &v1);
private:
    int num;
    string name;
    float score[3];
public:
    Player(){}
    Player(int num, string name)
    {
        this->num = num;
        this->name = name;
    }
};
void createPlayer(vector<int> &v, map<int, Player> &m)
{
    int i=0;
    string seedName="ABCDEFGHIJKLMNOPQRSTUVWX";
    for(i=0;i<24;i++)
    {
        int num = 100+i;
        string name="选手";
        name+=seedName[i];
        v.push_back(num);
        m.insert(make_pair(num, Player(num, name)));
    }
}
void playGame(int index,vector<int> &v,map<int, Player> &m,vector<int> &v1)
{
    //设置随机数种子
    srand(time(NULL));
    //打乱选手顺序
    random_shuffle(v.begin(), v.end());
    //定义count变量统计比赛的人数
    int count=0;
    //定义一个multimap<分数,编号>
    multimap<float, int, greater<float>> mul;

    cout<<"---------------第"<<index<<"轮比赛--------------"<<endl;
    vector<int>::iterator it=v.begin();
    for(;it!=v.end();it++)
    {
        count++;
        //(*it)==num
        //定义deque容器存放10位评委的分数
        deque<float> d;
        int i=0;
        for(i=0;i<10;i++)
        {
            d.push_back( (float)(rand()%41+60) );
        }
        //排序
        sort(d.begin(),d.end());
        //去掉最高分和最低分
        d.pop_back();
        d.pop_front();
        //求平均分
        float avg = accumulate(d.begin(),d.end(),0)/d.size();
        //将平均分放入选手成绩
        m[*it].score[index-1] = avg;
        mul.insert(make_pair(avg, *it));
        if(count%6 == 0)//刚好6人一组
        {
            //分析晋级的名单
            cout<<"\t第"<<count/6<<"组的晋级名单:"<<endl;
            //选择multimap容器中的前三
            multimap<float, int, greater<float>>::iterator mit=mul.begin();
            int i=0;
            for(i=0;i<3;i++, mit++)
            {
                v1.push_back((*mit).second);
                cout<<"\t\t"<<(*mit).second<<" "<<(*mit).first<<endl;
            }

            //当前组的得分情况
            cout<<"\t第"<<count/6<<"组的等分情况"<<endl;
            mit=mul.begin();
            for(i=0;i<6;i++,mit++)
            {
                int num = (*mit).second;
                cout<<"\t\t"<<num<<" "<<m[num].name<<" "<<m[num].score[index-1]<<endl;
            }

            //清空multiset容器
            mul.clear();
        }

    }
}
int main(int argc, char *argv[])
{
    vector<int> v;//存放选手编号
    map<int, Player> m;//将编号-选手存储

    //创建24名选手
    createPlayer(v, m);

    //第一轮比赛
    vector<int> v1;//存放竞技编号
    playGame(1,v,m,v1);

    //第二轮比赛
    vector<int> v2;//存放竞技编号
    playGame(2,v1,m,v2);

    //第三轮比赛
    vector<int> v3;//存放竞技编号
    playGame(3,v2,m,v3);


    return 0;
}
