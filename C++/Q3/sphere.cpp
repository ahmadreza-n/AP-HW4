#include "sphere.h"

#include <iomanip>
#include <cmath>

CSphere::~CSphere()
{
}

CSphere::CSphere(const double &radius_, const double &centerX_, const double &centerY_, const double &centerZ_)
    : CThreeDimensionalShape{}, radius{radius_}, centerX{centerX_}, centerY{centerY_}, centerZ{centerZ_}
{
}

double CSphere::volume() const
{
    return 4.0 * std::acos(-1) * std::pow(radius, 3) / 3.0;
}

double CSphere::area() const
{
    return 4.0 * std::acos(-1) * std::pow(radius, 2);
}

void CSphere::print(std::ostream &out) const
{
    out << std::setfill('=') << std::setw(25) << '=';
    out << std::endl;
    out << "sphere radius = " << radius << std::endl;
    out << "center-> (" << centerX << ", " << centerY << ", " << centerZ << ")" << std::endl;
    out << "area of " << area() << " & "
        << "volume of " << volume() << std::endl;
    out << std::setfill('=') << std::setw(25) << '=';
    out << std::endl;
}

CSphere CSphere::operator+(const CPoint &point)
{
    return CSphere{radius, centerX + point.x, centerY + point.y, centerZ + point.z};
}
