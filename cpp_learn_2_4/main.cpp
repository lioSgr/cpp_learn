#include "iostream"

// 类 对象（属性 行为）
//特性： 封装 继承 多态

// 设计一个圆类 求圆的周长
// 圆周长公式 = 2 * PI * 半径

const double PI = 3.1415926f;

class Circle
{
    // 访问权限
    // 公共权限
public:

    // 属性
    // 半径
    int m_r;

    // 行为
    double calculateZC()
    {
        return 2.0 * PI * m_r;
    }
};

int main(void){
    // 类实例化 通过一个类创建一个对象的过程
    Circle c1;
    c1.m_r = 10;

    std::cout << "圆形的周长 = " << c1.calculateZC() << std::endl;

    std::cout << "hello" << std::endl;
    return 0;
}