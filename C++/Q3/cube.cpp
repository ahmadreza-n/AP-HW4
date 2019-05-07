#include "cube.h"

#include <iomanip>

CCube::~CCube()
{
}

CCube::CCube(const double &sideLen_, const double &centerX_, const double &centerY_, const double &centerZ_)
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

CCube CCube::operator+(const CPoint &point)
{
    return CCube{sideLen, centerX + point.x, centerY + point.y, centerZ + point.z};
}
