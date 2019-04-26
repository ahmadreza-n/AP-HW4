#ifndef NODE_H
#define NODE_H

template <typename T>
class CNode
{
public:
  T value;
  CNode<T> *previous;

public:
  CNode();
  ~CNode();
  CNode(const T &, CNode<T> *);
};

#endif