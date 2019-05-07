#ifndef SPHERE_H
#define SPHERE_H

#include "threeDimensionalShape.h"

class CSphere : public CThreeDimensionalShape
{
  private:
    double radius, centerX, centerY, centerZ;

  public:
    CSphere(const double &radius_ = 0, const double &centerX = 0, const double &centerY = 0, const double &centerZ = 0);
    ~CSphere();

    double volume() const override final;
    double area() const override final;
    void print(std::ostream &) const override final;

    CSphere operator+(const CPoint &); //changes sphere's center
};

#endif
