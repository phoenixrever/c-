#ifndef LINK_H
#define LINK_H
#include <iostream>

//��������ڵ�����
struct STU
{
    //������
    int num;
    char name[32];

    //ָ����
    STU *next;
};
using namespace std;
extern void help(void);
extern STU* insertLink(STU *head, STU tmp);
extern void printLink(STU *head);
extern STU* searchLink(STU *head, char *name);
extern STU* deleteLink(STU *head, int num);
extern STU* freeLink(STU *head);
#endif // LINK_H
