#pragma once
#include <iostream>

class Point{
public:
    void setX(int x);
    void setY(int y);
    int getX(void);
    int getY(void);
private:
    int m_x;
    int m_y;
};