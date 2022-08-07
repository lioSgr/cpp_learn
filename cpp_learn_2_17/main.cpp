/*
 *初始化列表
 *
 * 
 * 
 * 
 */

#include <iostream>
#include <string.h>


class Person
{
    public:
        // 传统赋值
        // Person(int a, int b, int c)
        // {
        //     m_a = a;
        //     m_b = b;
        //     m_c = c;
        // }
        // 初始化列表的语法
        Person(int a, int b, int c) : m_a(a), m_b(b), m_c(c)
        {

        }
        int m_a;
        int m_b;
        int m_c;
};


class Human
{
    public:
        // 初始化列表的
        Human(int a, int b) : m_a(a), m_b(b)
        {

        }
        int m_a;
        int m_b;
};

void test01(void)
{
    // Person p(10, 20, 30);
    Person p(1,2,3);
    std::cout << p.m_a << p.m_b << p.m_c << std::endl;
}

int main(void){
    test01();
    return 0;
}