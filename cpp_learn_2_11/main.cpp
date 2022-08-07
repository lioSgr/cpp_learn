// 如何把类拆成不同的文件

#include <iostream>
#include "point.h"
#include "circle.h"


// // 点 和 圆 的关系
// class Point{
// public:
//     void setX(int x){
//         m_x = x;
//     }
//     void setY(int y){
//         m_y = y;
//     }
//     int getX(void){
//         return m_x;
//     }
//     int getY(void){
//         return m_y;
//     }
// private:
//     int m_x;
//     int m_y;
// };

// class Circle{
// public:
//     void setR(int r){
//         m_r = r;
//     }
//     int getR(void){
//         return m_r;
//     }
//     void setCenter(Point center){
//         m_center = center;
//     }
//     Point getCenter(void){
//         return m_center;
//     }

// private:
//     int m_r;
//     // 在类中可以让另一个类作为本类的成员
//     Point m_center;
// };

void isInCircle(Circle &c, Point &p){
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) \
                 + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    int rDistance = c.getR() * c.getR();

    if(distance > rDistance){
        std::cout << "out circle" << std::endl;
    }
    else if(distance == rDistance){
        std::cout << "on circle" << std::endl;
    }
    else{
        std::cout << "in clircle" << std::endl;
    }
}

int main(void){
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(80);
    c.setCenter(center);
    Point point;
    point.setX(0);
    point.setY(0);
    isInCircle(c, point);

    return 0;
}