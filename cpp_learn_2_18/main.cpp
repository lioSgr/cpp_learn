/*
 *
 *类对象多为类成员
 *      对象成员
 *  
 *  构造函数 优先构造其他类对象 在构造自身
 *  析构函数与构造相反
 */

#include <iostream>
#include <string.h>

class Phone
{
    public:
        Phone(std::string name)
        {
            std::cout << "pthone here" << std::endl;
            m_pName = name;
        }
        std::string m_pName;
};

class Person
{
    public:
        Person(std::string name, std::string pName) : m_name(name), m_phone(pName)
        {
            std::cout << "person here" << std::endl;
        }
         std::string m_name;
         Phone m_phone;
};

void test01()
{
    Person p("张三", "苹果MAX");
    // std::cout << p.m_name << p.m_phone << std::endl;
}

int main(void){
    test01();
    return 0;
}