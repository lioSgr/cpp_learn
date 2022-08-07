/*
 *成员变量 成员函数分开存储
 *      只有非静态成员变量才属于类上的对象
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
        int m_a;
        static int m_b;

        void func()
        {
            ;
        }

        static void func2()
        {
            ;
        }
};

int Person::m_b = 10;

void test01()
{
    Person p;
    // 空对象占用空间：1字节
    // c++会给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置
    cout << sizeof(p) << endl;
}

void test02()
{
    Person p;
    cout << sizeof(p) << endl;
}
int main(void){
    test01();
    test02();
    return 0;
}