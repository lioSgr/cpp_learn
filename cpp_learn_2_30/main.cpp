/*
递增运算符重载 ++
*/

#include <iostream>
#include <string>

using namespace std;

// 自定义整型变量
class Myinteger{
    friend ostream & opretor(ostream cout, Myinteger &myInt);
    public:
        Myinteger(){
            m_num = 0;
        }
        // 重载++运算符
        // 前置++
        // 后置++
        Myinteger & operator++(){
            m_num  ++;
            return *this;
        }
    private:
        int m_num;
};

class classb{
    public:
    private:
};

ostream & opretor(ostream cout, Myinteger &myInt){
    cout << myInt.m_num;
    return cout;
}

void test01(){
    Myinteger myInt;
    cout << ++myInt << endl;
}

void test02(){
    ;
}

int main(){
    test01();
    test02();
    return 0;
}