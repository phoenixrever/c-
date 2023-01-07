#include "array.h"
#include <string.h>
Array::Array()
{
    capacity = 5;
    size = 0;
    arr = new int[capacity];
    //�ռ���0
    memset(arr, 0,sizeof(int)*capacity);
}

Array::Array(int capacity)
{
    this->capacity = capacity;
    size = 0;
    arr = new int[capacity];
    //�ռ���0
    memset(arr, 0,sizeof(int)*capacity);
}

Array::Array(const Array &ob)
{
    capacity = ob.capacity;
    size = ob.size;

    //���
    arr = new int[capacity];
    memcpy(arr, ob.arr, sizeof(int)*capacity);
}

Array::~Array()
{
    if(arr != NULL)
    {
        delete [] arr;
        arr=NULL;
    }
}

int Array::getCapacity()
{
    return capacity;
}

int Array::getSize()
{
    return size;
}

void Array::printArray()
{
    int i=0;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Array::pushBack(int elem)
{
    //�жϵ������Ƿ���
    if(size == capacity)
    {
        //����ռ�
        int *tmp = new int[2*capacity];
        memset(tmp,0,sizeof(int)*2*capacity);
        //���ɿռ������ �������¿ռ���
        memcpy(tmp,arr,size*sizeof(int));
        //�ͷžɿռ�
        delete [] arr;
        //��arrָ���¿ռ�
        arr = tmp;
        //��������
        capacity = 2*capacity;
    }

    arr[size] = elem;
    size++;
}

void Array::popBack()
{
    if(size == 0)
    {
        cout<<"����Ϊ��"<<endl;
    }
    else
    {
        size--;
        arr[size]=0;
    }
}

int &Array::at(int pos)
{
    if(pos<0 || pos >=size)
    {
        cout<<"λ����Ч"<<endl;
        exit(-1);
    }
    return arr[pos];
}
