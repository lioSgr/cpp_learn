/*
 *静态成员
 *  静态成员变量
 *      共享一份数据
 *      在编译阶段就分配内存
 *      类内声明  类外初始化
 *  静态成员函数 static
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
        static int m_a;
    private:
        static int m_b;
};

int Person::m_a = 100;
int Person::m_b = 200;

void test01()
{
    Person p;
    cout << p.m_a << endl;

    Person p2;
    p2.m_a = 200;
    cout << p.m_a << endl;
}

void test02()
{
    // 静态成员变量有两种访问方式
    //      通过对象访问
    //      通过类名访问
    // Person p;
    // cout << p.m_a << endl;

    cout << Person::m_a << endl;
    // cout << Person::m_b << endl;
}

int main(void)
{
    // test01();
    test02();
    return 0;
}