#include "twoDimensionalShape.h"

CTwoDimensionalShape::CTwoDimensionalShape() : CTwoDimensionalShape{0}
{
}

CTwoDimensionalShape::~CTwoDimensionalShape()
{
}

CTwoDimensionalShape::CTwoDimensionalShape(const int &sideSize_) : CShape(2), sideSize{sideSize_}
{

}