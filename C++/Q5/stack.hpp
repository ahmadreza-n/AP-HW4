#include "stack.h"

template <typename T>
CStack<T>::CStack() : last{nullptr}, count{}
{
}

template <typename T>
CStack<T>::~CStack()
{
    for (int i = 0; i < count; i++)
    {
        CNode<T> *temp{last->previous};
        delete last;
        last = temp;
    }
}

template <typename T>
void CStack<T>::push(const T &value)
{
    CNode<T> *temp{new CNode<T>{value, last}};
    last = temp;
    count++;
}

template <typename T>
bool CStack<T>::isEmpty()
{
    return !count;
}

template <typename T>
T CStack<T>::pop()
{
    T value{last->value};
    CNode<T> *temp{last};
    last = last->previous;
    delete temp;
    count--;
    return value;
}

template <typename T>
int CStack<T>::getCount()
{
    return count;
}