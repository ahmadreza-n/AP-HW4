#include "square.h"

CSquare::CSquare() : CSquare{0, 0, 0}
{
}

CSquare::CSquare(const double &sideLen_, const double &centerX_, const double &centerY_)
    : CTwoDimensionalShape{4}, sideLen{sideLen_}, centerX{centerX_}, centerY{centerY_}
{
}

CSquare::~CSquare()
{
}

double CSquare::area() const
{
    return sideLen * 4;
}
