#include "node.h"

template <typename T>
CNode<T>::CNode()
{
}

template <typename T>
CNode<T>::~CNode()
{
}

template <typename T>
CNode<T>::CNode(const T &value_, CNode<T> *previous_)
    : value{value_}, previous{previous_}
{
}