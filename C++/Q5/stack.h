#ifndef STACK_H
#define STACK_H
#include "node.hpp"

template <typename T>
class CStack
{
private:
  CNode<T> *last; //last element address
  int count; //how many elements

public:
  CStack();
  ~CStack();

  void push(const T &);
  bool isEmpty();
  T pop();
  int getCount();
};

#endif //STACK_H