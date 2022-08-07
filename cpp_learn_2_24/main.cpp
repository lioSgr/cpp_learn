/*
const修饰成员函数

    常函数  成员函数后面加const 不允许修改成员属性 想修改加mutable
    常对象  常对象只能调用常函数
*/

#include <iostream>
#include <string>

using namespace std;

class Person
{
    public:
        // this 本质 就是 指针常量 指针的指向不允许修改 数值不能修改的话 const Person *this const
        // 在成员函数后面加const 修饰的就是this指针
        void showPerson() const
        {
            // this->m_a = 100;
            // this = NULL;
            this->m_b = 100;
        }

        void func()
        {
            ;
        }

        int m_a;
        // mutable 关键字
        mutable int m_b;
};

void test01()
{
    Person p;
    p.showPerson();
}

void test02()
{
    const Person p;
    p.m_b = 100;
}

int main()
{
    test01();
    return 0;
}