#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H
#include "shape.h"

class CTwoDimensionalShape : public CShape
{
  private:
  public:
    CTwoDimensionalShape();
    virtual ~CTwoDimensionalShape();

    virtual double area() const = 0;
    virtual void print(std::ostream &) const override = 0;

    virtual void operator+(const CPoint &) override = 0;
};

#endif
