#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H
#include "shape.h"

class CTwoDimensionalShape : public CShape
{
private:
  int sideSize;
public:
  CTwoDimensionalShape();
  ~CTwoDimensionalShape();

  CTwoDimensionalShape(const int &sideSize_);

  virtual double area() const override;
};

#endif