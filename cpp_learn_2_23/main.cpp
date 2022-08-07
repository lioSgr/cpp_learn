/*
 *this 指针
 *      指向被调用的成员函数所属的对象
 *      隐含在每个非静态成员函数内
 * 
 * 
 * 
 */

// 解决名称冲突
// 返回对象本身
#include <iostream>
#include <string.h>


class Person
{
    public:

        Person(int age)
        {
            // 指向被调用的成员函数所属的对象
            this->age = age;
        }
        Person& PersonAddAge(Person &p)
        {
            this->age += p.age;
            // this 指向p2的指针 *this指向p2这个对象本体
            return *this;
        }

        int age;
};

void test01()
{
    Person p(18);
    std::cout << p.age << std::endl;
}

void test02()
{
    Person p1(10);
    Person p2(10);
    // 链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    std::cout << p2.age << std::endl;
}

int main(void){
    test01();
    test02();
    return 0;
}