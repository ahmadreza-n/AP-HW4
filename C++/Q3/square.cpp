#include "square.h"
#include <iomanip>

CSquare::CSquare(const double &sideLen_, const double &centerX_, const double &centerY_)
    : CTwoDimensionalShape{}, sideLen{sideLen_}, centerX{centerX_}, centerY{centerY_}
{
}

CSquare::~CSquare()
{
}

double CSquare::area() const
{
    return sideLen * sideLen;
}

void CSquare::print(std::ostream &out) const
{
    out << std::setfill('=') << std::setw(25) << '=';
    out << std::endl;
    out << "square side lenght = " << sideLen << std::endl;
    out << "center-> (" << centerX << ", " << centerY << ")" << std::endl;
    out << "area of " << area() << std::endl;
    out << std::setfill('=') << std::setw(25) << '=';
    out << std::endl;
}

CSquare CSquare::operator+(const CPoint &point)
{
    return CSquare{sideLen, centerX + point.x, centerY + point.y};
}
