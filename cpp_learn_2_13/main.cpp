/*
 *
 *
 * 构造函数分类和调用
 * 构造函数：
 *     分类 参数：有参构造 无参构造
 *               普通构造 拷贝构造
 *      调用：括号法
 *           显示法
 *           隐式转换法
 * 
 */

// 构造函数的分类和调用

#include <iostream>
#include <string.h>

class Person
{
    public:
        // 无参构造 默认构造
        Person()
        {
            std::cout << "person 构造函数 无参函数" << std::endl;
        }
        // 有参构造
        Person(int a)
        {
            age = a;
            std::cout << "person 构造函数 有参构造函数" << std::endl;
        }

        // 拷贝构造函数
        Person(const Person &p)
        {
            // 将传入的人的身上所有的属性 拷贝到我身上
            age = p.age;
            std::cout << "person 构造函数 拷贝构造函数" << std::endl;
        }

        ~Person()
        {
            std::cout << "person 析构函数" << std::endl;
        }

        int age;
};


// 调用

void test01()
{
    // 默认构造函数调用
    Person p;
    // 括号法
    Person p2(10);
    // 拷贝构造
    Person p3(p2);
    // 注意事项：
    //      调用默认构造函数的时候不要加括号
    // 因为下面的这行代码编译器认为这是一个函数声明，不会认为在创建对象
    Person p1();
    // 
    std::cout << "p2.age = " << p2.age << std::endl;
    std::cout << "p3.age = " << p3.age << std::endl;
    
    // 显示法
    Person p1;
    Person p2 = Person(10);
    Person p3 = Person(p2);

    // Person(10); //匿名对象特点：当前千行执行结束后 系统会立即回收匿名的对象
    // std::cout << "aaaa" << std::endl;

    // 注意事项
    //     不要利用拷贝构造函数初始化一个匿名对象
    // Person(p3); //编译器Person(p3) == Person p3
    
    // 隐式转换法
    Person p4 = 10; // Person p4 == Person(10)
    // 拷贝构造
    Person p5 = p4;
}

int main(void)
{
    test01();
    return 0;
}