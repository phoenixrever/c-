#ifndef MYARRAY_HPP
#define MYARRAY_HPP
#include<iostream>
#include<string.h>
using namespace std;
template<class T>
class MyArray
{
    template<class T1>
    friend ostream& operator<<(ostream &out, MyArray<T1> ob);
private:
    T *arr;
    int size;
    int capacity;
public:
    MyArray();
    MyArray(int capacity);
    MyArray(const MyArray &ob);
    ~MyArray();
    MyArray& operator=(MyArray &ob);
    void pushBack(T elem);
    void sortArray();
};
#endif // MYARRAY_HPP

template<class T>
MyArray<T>::MyArray()
{
    capacity=5;
    size=0;
    arr=new T[capacity];
    memset(arr, 0,sizeof(T)*capacity);
}

template<class T>
MyArray<T>::MyArray(int capacity)
{
    this->capacity = capacity;
    size=0;
    arr=new T[capacity];
    memset(arr, 0,sizeof(T)*capacity);
}

template<class T>
MyArray<T>::MyArray(const MyArray &ob)
{
    capacity = ob.capacity;
    size = ob.size;
    arr=new T[capacity];
    memset(arr, 0,sizeof(T)*capacity);

    memcpy(arr, ob.arr, sizeof(T)*capacity);
}

template<class T>
MyArray<T>::~MyArray()
{
    delete [] arr;
}

template<class T>
MyArray<T> &MyArray<T>::operator=(MyArray &ob)
{
    //�ж�this->arr�Ƿ���ھɿռ�
    if(arr != NULL)
    {
        delete [] arr;
        arr=NULL;
    }

    size = ob.size;
    capacity = ob.capacity;
    arr = new T[capacity];
    memset(arr, 0,sizeof(T)*capacity);
    memcpy(arr, ob.arr, sizeof(T)*capacity);

    return *this;
}

template<class T>
void MyArray<T>::pushBack(T elem)
{
    //�����Ƿ���
    if(size == capacity)
    {
        //��չ����
        capacity = 2*capacity;

        //������ʱ�ռ�
        T *tmp = new T[capacity];

        if(arr != NULL)
        {
            //���ɿռ俽�����¿ռ���
            memcpy(tmp, arr, sizeof(T)*size);
            //�ͷžɿռ�
            delete [] arr;
        }

        //��arrָ��������Ŀռ�
        arr = tmp;
    }

    arr[size]=elem;
    size++;
    return;
}

template<class T>
void MyArray<T>::sortArray()
{
    //���sizeΪ0 ����Ҫ����
    if(size == 0)
    {
        cout<<"����û������"<<endl;
    }
    else
    {
        int i=0,j=0;
        for(i=0;i<size-1;i++)
        {
            for(j=0;j<size-i-1;j++)
            {
                if(arr[j] > arr[j+1])
                {
                    T tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1]=tmp;
                }
            }
        }
    }
    return;
}

template<class T1>
ostream& operator<<(ostream &out, MyArray<T1> ob)
{
    int i=0;
    for(i=0;i<ob.size;i++)
    {
        out<<ob.arr[i]<<" ";
    }
    out<<endl;

    return out;
}
