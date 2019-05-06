#include "cube.h"
#include <iomanip>

CCube::CCube() : CCube{0}
{
}

CCube::~CCube()
{
}

CCube::CCube(double sideLen_, double centerX_, double centerY_, double centerZ_)
    : CThreeDimensionalShape{}, sideLen{sideLen_}, centerX{centerX_}, centerY{centerY_}, centerZ{centerZ_}
{
}

double CCube::volume() const
{
    return sideLen * sideLen * sideLen;
}

double CCube::area() const
{
    return sideLen * sideLen * 6;
}

void CCube::print(std::ostream &out) const
{
    out << std::setfill('=') << std::setw(25) << '=';
    out << std::endl;
    out << "cube side lenght = " << sideLen << std::endl;
    out << "center-> (" << centerX << ", " << centerY << ", " << centerZ << ")" << std::endl;
    out << "area of " << area() << " & "
        << "volume of " << volume() << std::endl;
    out << std::setfill('=') << std::setw(25) << '=';
    out << std::endl;
}

void CCube::operator+(const CPoint &point) {
  centerX += point.x;
  centerY += point.y;
  centerZ += point.z;
}
