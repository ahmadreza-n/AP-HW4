#ifndef SQUARE_H
#define SQUARE_H

#include "twoDimensionalShape.h"

class CSquare : public CTwoDimensionalShape
{
public:
  double sideLen;
  double centerX, centerY;

public:
  CSquare();
  virtual ~CSquare();
  CSquare(const double &sideLen_, const double &centerX_ = 0, const double &centerY_ = 0);

  double area() const override final;
  void print(std::ostream &out) const override final;

  void operator+(const CPoint &) override final;
};

#endif
