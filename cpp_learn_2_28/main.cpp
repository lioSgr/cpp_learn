/*
运算符重载
    内置的运算符编译器知道怎么处理
    加号运算符重载

*/

// 成员函数重载加号
// 全局函数重载加号

#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
        //成员函数重载加号
        // Person operator+(Person &p){
        //     Person temp;
        //     temp.m_a = this->m_a + p.m_a;
        //     temp.m_b = this->m_b + p.m_b;
        //     return temp;
        // }
        int m_a;
        int m_b;
};

Person operator+(Person &p1, Person&p2){
    Person temp;
    temp.m_a = p1.m_a + p2.m_a;
    temp.m_b = p1.m_b + p2.m_b;
    return temp;
}

Person operator+(Person &p1, int num){
    Person temp;
    temp.m_a = p1.m_a + num;
    temp.m_b = p1.m_b + num;
    return temp;
}

void test01(){
    Person p1;
    p1.m_a = 10;
    p1.m_b = 10;
    Person p2;
    p2.m_a = 10;
    p2.m_b = 10;
    // 成员函数重载 本质调用：Person p3 = p2.operator+(p1)
    // 全局函数重载 本质调用：Person p3 = operator+(p1 , p2)
    Person p3 = p1 + p2;
    cout << p3.m_a << "\t" << p3.m_b << endl;

    // 函数重载
    Person p4 = p1 + 100;
    cout << p4.m_a << "\t" << p4.m_b << endl;
}

void test02(){
    ;
}

int main(){
    test01();
    test02();
    return 0;
}