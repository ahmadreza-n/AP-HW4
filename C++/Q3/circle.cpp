#include "circle.h"

#include <iomanip>
#include <cmath>

CCircle::~CCircle()
{
}

CCircle::CCircle(const double &radius_, const double &centerX_, const double &centerY_)
    : CTwoDimensionalShape{}, radius{radius_}, centerX{centerX_}, centerY{centerY_}
{
}

double CCircle::area() const
{
    return std::acos(-1) * std::pow(radius, 2);
}

void CCircle::print(std::ostream &out) const
{
    out << std::setfill('=') << std::setw(25) << '=';
    out << std::endl;
    out << "circle radius = " << radius << std::endl;
    out << "center-> (" << centerX << ", " << centerY << ")" << std::endl;
    out << "area of " << area() << std::endl;
    out << std::setfill('=') << std::setw(25) << '=';
    out << std::endl;
}

CCircle CCircle::operator+(const CPoint &point)
{
    return CCircle{radius, centerX + point.x, centerY + point.y};
}
