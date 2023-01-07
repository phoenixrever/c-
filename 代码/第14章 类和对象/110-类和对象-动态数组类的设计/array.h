#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>
using namespace std;

class Array
{
private:
    int *arr;//���������Ԫ�صĵ�ַ
    int size;//��С
    int capacity;//����
public:
    Array();
    Array(int capacity);
    Array(const Array &ob);
    ~Array();

    int getCapacity(void);
    int getSize(void);
    void printArray(void);
    //β����������
    void pushBack(int elem);
    //β��ɾ��Ԫ��
    void popBack(void);
    //�鿴ĳ��Ԫ��
    int& at(int pos);
};

#endif // ARRAY_H
