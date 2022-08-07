/*拷贝构造函数调用时机
 *
 *
 * 
 * 使用一个已经创建完毕的对象来初始化一个新对象
 * 数值传递的方式给函数参数传数值
 * 数值方式返回局部变量
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
        Person(int age)
        {
            m_age = age;
            std::cout << "有参构造函数" << std::endl;
        }
        Person(const Person &p)
        {
            m_age = p.m_age;
            std::cout << "拷贝构造函数" << std::endl;
        }
        ~Person()
        {
            std::cout << "析构函数" << std::endl;
        }

        int m_age;
};

void test01()
{
    Person p1(20);
    Person p2(p1);

    std::cout << p2.m_age << std::endl;
}

void doWord(Person p)
{
}

void test02()
{
    Person p;
    doWord(p);
}

Person doWork(){
    Person p1;
    return p1;
}
void test03()
{
    Person p = doWork();
}

int main(void){
    test01();
    test02();
    test03();
    return 0;
}