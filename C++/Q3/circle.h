#ifndef CIRCLE_H
#define CIRCLE_H

#include "twoDimensionalShape.h"

class CCircle : public CTwoDimensionalShape
{
public:
  double radius, centerX, centerY;

public:
  CCircle();
  virtual ~CCircle();
  CCircle(double radius_, double centerX_ = 0, double centerY_ = 0);

  double area() const override final;
  void print(std::ostream &) const override final;
  
  virtual void operator+(const CPoint &) override final;
};

#endif
