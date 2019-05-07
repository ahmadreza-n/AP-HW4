#ifndef CIRCLE_H
#define CIRCLE_H

#include "twoDimensionalShape.h"

class CCircle : public CTwoDimensionalShape
{
private:
    double radius, centerX, centerY;

public:
    CCircle(const double &radius_ = 0, const double &centerX_ = 0, const double &centerY_ = 0);
    virtual ~CCircle();

    double area() const override final;
    void print(std::ostream &) const override final;

    CCircle operator+(const CPoint &); //changes the center of the circle
};

#endif
