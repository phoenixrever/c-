#ifndef LINK_H
#define LINK_H
#include <iostream>

//定义链表节点类型
struct STU
{
    //数据域
    int num;
    char name[32];

    //指针域
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
