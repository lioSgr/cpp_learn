// CPP继承
// 好处：减少重复的代码
// 语法：
//    class 子类 ： 继承方式 父类
//    子类 也称为 派生类； 父类 也称为 基类
// 继承方式：
//      公共继承 私有继承 保护继承

// 继承模型
//      父类中对的非静态成员属性都被子类继承 只是被编译器隐藏了

// 继承中构造和析构的顺序
//      父类子类构造 和 析构 顺序
//      继承中构造和析构的顺序如下
//          先构造父类 再构造子类   析构 先析构子类 再析构父类

// 继承同名成员处理
//      访问子类成员 直接访问
//      访问父类同名成员    添加

// 继承同名静态成员处理
//      访问子类 直接访问
//      访问父类 添加作用域

// 多继承语法   实际开发中不建议使用
//      语法：
//          class 子类 ： 继承方式 父类1，父类2

#include <iostream>
#include <string>
using namespace std;

class Base1{
    public:
        Base1(){
            m_a = 100;
        }
        int m_a;
};
class Base2{
    public:
        Base2(){
            m_a = 200;
        }
        int m_a;
};

class Son : public Base1, Base2{
    public:
        Son(){
            m_c = 300;
            m_d = 400;
        }
        int m_c;
        int m_d;
};


// 同名静态成员属性
void test01(){
    Son s;
    cout << sizeof(Son) << endl;
    // 父类中出现同名成员 添加作用域访问
    cout << s.Base1::m_a << endl;
    cout << s.Base2::m_a << endl;
}

// 同名成员函数
void test02(){

}

int main(){
    test01();
    test02();
    return 0;
}


