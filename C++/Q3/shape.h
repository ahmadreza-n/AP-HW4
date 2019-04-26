#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class CShape
{
protected:
  int dimensionSize;

public:
  CShape();
  CShape(const int &dimensionSize_);
  virtual ~CShape();

  virtual double area() const = 0;
  virtual void print(std::ostream &) const = 0;
  friend std::ostream &operator<<(std::ostream &, const CShape &);
};

#endif
