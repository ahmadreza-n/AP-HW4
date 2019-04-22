#ifndef SHAPE_h
#define SHAPE_H

class CShape
{
protected:
  int dimensionSize;

public:
  CShape();
  CShape(const int &dimensionSize_);
  ~CShape();

  virtual double volume() const;
  virtual double area() const;
};

#endif
