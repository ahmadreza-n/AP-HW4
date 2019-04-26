#include "shape.h"

CShape::CShape() : CShape{0}
{
}

CShape::CShape(const int &dimensionSize_) : dimensionSize{dimensionSize_}
{
}

CShape::~CShape()
{
}

std::ostream &operator<<(std::ostream &out, const CShape &shape)
{
    shape.print(out);
    return out;
}