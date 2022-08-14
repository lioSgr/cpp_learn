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

#include <iostream>
#include <string>
using namespace std;

class Base{
    public:
        Base(){
            m_a = 100;
        }
        void func(){
            cout << "base func" << endl;
        }
        int m_a;
};

class Son : public Base{
    public:
        Son(){
            m_a = 200;
        }
        void func(){
            cout << "son func" << endl;
        }
        void func(int a){
            cout << "son func" << endl;
        }
        int m_a;
};
// 同名成员属性
void test01(){
    Son s;
    cout << s.m_a << endl;
    // 添加作用域
    cout << s.Base::m_a << endl;
}

// 同名成员函数
void test02(){
    Son s;
    s.func();
    // 添加作用域
    s.Base::func();
    // 子类中具有父类同名的函数 编译器隐藏 若访问 添加作用域即可
    s.Base::func();
}

int main(){
    test01();
    test02();
    return 0;
}


