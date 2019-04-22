#ifndef SQUARE_H
#define SQUARE_H

#include "twoDimensionalShape.h"

class CSquare : public CTwoDimensionalShape
{
private:
  double sideLen;
  double centerX, centerY;
public:
  CSquare();
  ~CSquare();

  CSquare(const double &sideLen_, const double &centerX_, const double &centerY_);
  
  double area() const override final;
};

#endif