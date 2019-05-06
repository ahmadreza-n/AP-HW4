#ifndef SPHERE_H
#define SPHERE_H

#include "threeDimensionalShape.h"

class CSphere : public CThreeDimensionalShape
{
public:
  double radius, centerX, centerY, centerZ;

public:
  CSphere();
  ~CSphere();
  CSphere(double radius_, double centerX = 0, double centerY = 0, double centerZ = 0);

  double volume() const override final;
  double area() const override final;
  void print(std::ostream &) const override final;

  void operator+(const CPoint &) override final;
};

#endif
