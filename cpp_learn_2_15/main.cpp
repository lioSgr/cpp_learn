/*
 *
 *构造函数调用规则
 * 
 * 1、只要创建一个类 c++编译器会给每个类添加至少三个函数    
 * 默认构造函数（空实现）    
 * 析构函数（空实现）  
 * 拷贝构造函数（值拷贝）
 * 
 */

#include <iostream>
#include <string.h>

// 调用规则 
//  写了有参构造函数    不造提供默认构造函数    提供拷贝构造函数
// 写了拷贝构造函数     编译器不在提供别的构造函数
class Person
{
    public:
        Person()
        {
            std::cout << "默认构造函数" << std::endl;
        }
        Person(int age)
        {
            m_age = age;
            std::cout << "有参构造函数" << std::endl;
        }
        // Person(const Person &p)
        // {
        //     m_age = p.m_age;
        //     std::cout << "拷贝构造函数" << std::endl;
        // }
        ~Person()
        {
            std::cout << "析构函数" << std::endl;
        }

        int m_age;
};

void test01()
{
    Person p;
    p.m_age = 18;
    Person p2(p);

    std::cout << p2.m_age << std::endl;
}

void  test02()
{    
    Person p(18);
    Person p2(p);
}

int main(void){
    test01();
    test02();
    return 0;
}