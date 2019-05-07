#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include "point.h"

class CShape
{
  protected:
    int dimensionSize;

  public:
    CShape(const int &dimensionSize_ = 0);
    virtual ~CShape();

    virtual void print(std::ostream &) const = 0;
    friend std::ostream &operator<<(std::ostream &, const CShape &);
    
};

#endif
