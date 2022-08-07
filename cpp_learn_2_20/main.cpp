/*
 *静态成员函数
 *      共享同一个函数
 *      静态成员函数只能访问静态成员变量
 * 
 * 
 * 
 */

#include <iostream>
#include <string.h>

using namespace std;

class Person
{
    public:
        static void func()
        {
            m_a = 1;
            // m_b = 100;
            cout << "static used" << endl;
        }
        static int m_a;
        int m_b;
};

int Person::m_a = 0;

void test01()
{
    // 通过对象调用
    Person p;
    p.func();
    // 通过类名调用
    Person::func();
}

int main(void)
{
    test01();
    return 0;
}