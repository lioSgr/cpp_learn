#include "circle.h"
#include "point.h"


void Circle::setR(int r){
    m_r = r;
}
int Circle::getR(void){
    return m_r;
}
void Circle::setCenter(Point center){
    m_center = center;
}
Point Circle::getCenter(void){
    return m_center;
}