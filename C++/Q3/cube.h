#ifndef CUBE_H
#define CUBE_H

#include "threeDimensionalShape.h"

class CCube : public CThreeDimensionalShape
{
  private:
    double sideLen, centerX, centerY, centerZ;

  public:
    CCube(double sideLen_ = 0, double centerX_ = 0, double centerY_ = 0, double centerZ_ = 0);
    virtual ~CCube();

    double volume() const override final;
    double area() const override final;
    void print(std::ostream &) const override final;

    virtual void operator+(const CPoint &) override final;
};

#endif
