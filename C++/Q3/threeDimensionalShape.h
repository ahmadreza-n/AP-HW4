#ifndef THREEDIMENSIONALSHAPE_H
#define THREEDIMENSIONALSHAPE_H
#include "shape.h"

class CThreeDimensionalShape : public CShape
{
private:
public:
  CThreeDimensionalShape();
  virtual ~CThreeDimensionalShape();

  virtual double volume() const = 0;
  virtual double area() const = 0;
  virtual void print(std::ostream &) const override = 0;
};

#endif