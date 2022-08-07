/*
 *
 *深拷贝 浅拷贝
 * 
 * 深拷贝：重新在堆区申请空间，进行赋值操作
 * 浅拷贝：编译器提供的赋值操作     容易产生重新释放内存的崩溃
 * 
 */

#include <iostream>
#include <string.h>

class Person
{
    public:
        Person()
        {
            std::cout << "默认构造函数" << std::endl;
        }
        Person(int age, int high)
        {
            m_age = age;
            m_high = new int(high);
            std::cout << "参数构造函数" << std::endl;
        }

        // 自己创建拷贝构造函数
        Person(const Person &p)
        {
            m_age = p.m_age;
            std::cout << "拷贝构造函数" << std::endl;
            m_high = new int(*p.m_high);
        }

        ~Person()
        {
            // 堆区创建了内存 析构释放
            if(m_high != NULL){
                delete m_high;
            }
            std::cout << "析构函数" << std::endl;
        }

        int m_age;
        int *m_high;
};

void test01()
{
    Person p1(18, 160);
    
    std::cout << p1.m_age << "\t" << *p1.m_high << std::endl;
    Person p2(p1);
    std::cout << p2.m_age << "\t" << *p2.m_high << std::endl;
}

int main(void){
    test01();
    return 0;
}