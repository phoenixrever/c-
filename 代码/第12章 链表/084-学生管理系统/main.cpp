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
        cout<<"请输入操作指令:";
        cin>>cmd;

        if(strcmp(cmd,"help") == 0)
        {
            help();
        }
        else if(strcmp(cmd,"insert") == 0)
        {
            cout<<"请输入要插入的节点信息(num name):";
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
            cout<<"请输入查询的姓名:";
            char name[32]="";
            cin>>name;

            STU *ret=NULL;
            ret = searchLink(head, name);
            if(ret != NULL)
            {
                cout<<"查询的结构:num="<<ret->num<<" , name="<<ret->name<<endl;
            }
        }
        else if(strcmp(cmd,"delete") == 0)
        {
            cout<<"请输入删除的学号:";
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
