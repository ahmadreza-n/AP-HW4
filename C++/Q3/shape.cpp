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
