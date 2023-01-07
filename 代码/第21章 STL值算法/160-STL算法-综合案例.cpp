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
        string name="ѡ��";
        name+=seedName[i];
        v.push_back(num);
        m.insert(make_pair(num, Player(num, name)));
    }
}
void playGame(int index,vector<int> &v,map<int, Player> &m,vector<int> &v1)
{
    //�������������
    srand(time(NULL));
    //����ѡ��˳��
    random_shuffle(v.begin(), v.end());
    //����count����ͳ�Ʊ���������
    int count=0;
    //����һ��multimap<����,���>
    multimap<float, int, greater<float>> mul;

    cout<<"---------------��"<<index<<"�ֱ���--------------"<<endl;
    vector<int>::iterator it=v.begin();
    for(;it!=v.end();it++)
    {
        count++;
        //(*it)==num
        //����deque�������10λ��ί�ķ���
        deque<float> d;
        int i=0;
        for(i=0;i<10;i++)
        {
            d.push_back( (float)(rand()%41+60) );
        }
        //����
        sort(d.begin(),d.end());
        //ȥ����߷ֺ���ͷ�
        d.pop_back();
        d.pop_front();
        //��ƽ����
        float avg = accumulate(d.begin(),d.end(),0)/d.size();
        //��ƽ���ַ���ѡ�ֳɼ�
        m[*it].score[index-1] = avg;
        mul.insert(make_pair(avg, *it));
        if(count%6 == 0)//�պ�6��һ��
        {
            //��������������
            cout<<"\t��"<<count/6<<"��Ľ�������:"<<endl;
            //ѡ��multimap�����е�ǰ��
            multimap<float, int, greater<float>>::iterator mit=mul.begin();
            int i=0;
            for(i=0;i<3;i++, mit++)
            {
                v1.push_back((*mit).second);
                cout<<"\t\t"<<(*mit).second<<" "<<(*mit).first<<endl;
            }

            //��ǰ��ĵ÷����
            cout<<"\t��"<<count/6<<"��ĵȷ����"<<endl;
            mit=mul.begin();
            for(i=0;i<6;i++,mit++)
            {
                int num = (*mit).second;
                cout<<"\t\t"<<num<<" "<<m[num].name<<" "<<m[num].score[index-1]<<endl;
            }

            //���multiset����
            mul.clear();
        }

    }
}
int main(int argc, char *argv[])
{
    vector<int> v;//���ѡ�ֱ��
    map<int, Player> m;//�����-ѡ�ִ洢

    //����24��ѡ��
    createPlayer(v, m);

    //��һ�ֱ���
    vector<int> v1;//��ž������
    playGame(1,v,m,v1);

    //�ڶ��ֱ���
    vector<int> v2;//��ž������
    playGame(2,v1,m,v2);

    //�����ֱ���
    vector<int> v3;//��ž������
    playGame(3,v2,m,v3);


    return 0;
}
