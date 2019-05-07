#ifndef CIRCLE_H
#define CIRCLE_H

#include "twoDimensionalShape.h"

class CCircle : public CTwoDimensionalShape
{
  private:
    double radius, centerX, centerY;

  public:
    CCircle(double radius_ = 0, double centerX_ = 0, double centerY_ = 0);
    virtual ~CCircle();

    double area() const override final;
    void print(std::ostream &) const override final;

    virtual void operator+(const CPoint &) override final;
};

#endif
