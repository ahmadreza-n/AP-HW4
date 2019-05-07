#ifndef POINT_H
#define POINT_H

class CPoint
{
  public:
    double x, y, z;

  public:
    CPoint(const double &x_ = 0, const double &y_ = 0, const double &z_ = 0);
    ~CPoint();
};

#endif //POINT_H
