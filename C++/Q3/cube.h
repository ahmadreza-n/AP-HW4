#ifndef CUBE_H
#define CUBE_H

#include "threeDimensionalShape.h"

class CCube : public CThreeDimensionalShape
{
private:
  double sideLen, centerX, centerY, centerZ;

public:
  CCube(const double &sideLen_ = 0, const double &centerX_ = 0, const double &centerY_ = 0, const double &centerZ_ = 0);
  virtual ~CCube();

  double volume() const override final;
  double area() const override final;
  void print(std::ostream &) const override final;

  CCube operator+(const CPoint &); //changes cube center
};

#endif
