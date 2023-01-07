#include <iostream>
#include "link.h"
#include <string.h>
using namespace std;
STU *head=NULL;
int main(int argc, char *argv[])
{
    help();

    while(1)
    {
        char cmd[64]="";
        cout<<"���������ָ��:";
        cin>>cmd;

        if(strcmp(cmd,"help") == 0)
        {
            help();
        }
        else if(strcmp(cmd,"insert") == 0)
        {
            cout<<"������Ҫ����Ľڵ���Ϣ(num name):";
            STU tmp;
            cin>>tmp.num>>tmp.name;

            head = insertLink(head, tmp);
        }
        else if(strcmp(cmd,"print") == 0)
        {
            printLink(head);
        }
        else if(strcmp(cmd,"search") == 0)
        {
            cout<<"�������ѯ������:";
            char name[32]="";
            cin>>name;

            STU *ret=NULL;
            ret = searchLink(head, name);
            if(ret != NULL)
            {
                cout<<"��ѯ�Ľṹ:num="<<ret->num<<" , name="<<ret->name<<endl;
            }
        }
        else if(strcmp(cmd,"delete") == 0)
        {
            cout<<"������ɾ����ѧ��:";
            int num=0;
            cin>>num;

            head = deleteLink(head, num);
        }
        else if(strcmp(cmd,"free") == 0)
        {
            head = freeLink(head);
        }
        else if(strcmp(cmd,"cls") == 0)
        {
            system("cls");
        }
        else if(strcmp(cmd,"quit") == 0)
        {
            head = freeLink(head);
            return 0;
        }

    }
    return 0;
}
