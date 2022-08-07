#pragma once
#include <iostream>
#include "point.h"

class Circle{
public:
    void setR(int r);
    int getR(void);
    void setCenter(Point center);
    Point getCenter(void);

private:
    int m_r;
    // 在类中可以让另一个类作为本类的成员
    Point m_center;
};