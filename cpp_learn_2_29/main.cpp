/*
左移运算符重载
    <<
*/

#include <iostream>
#include <string>

using namespace std;

class Person{
    friend ostream & operator<<(ostream &cout, Person &p);
    public:
        // 利用成员函数重载  <<;
        // 不会利用成员函数重载<< 因为无法实现 只能利用全局函数重载左移运算符
        // void operator<<(Person &p){
        //     ;
        // }
        // int m_a;
        // int m_b;
        Person(int a, int b){
            m_a = a;
            m_b = b;
        }
    private:
        int m_a;
        int m_b;
};

class classb{
    public:
    private:
};

ostream & operator<<(ostream &cout, Person &p){
    cout << p.m_a << p.m_b;
    return cout;
}

void test01(){
    Person p(10, 10);
    // 链式编程思想
    cout << p << endl;
}

void test02(){
    ;
}

int main(){
    test01();
    test02();
    return 0;
}