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

#include <iostream>
#include <string>
using namespace std;

class Base{
    public:
        Base(){
            cout << "父类   构造函数" << endl;
        }
        ~Base(){
            cout << "父类   析构函数" << endl;
        }
};

class Son : public Base{
    public:
        Son(){
            cout << "子类   构造函数" << endl;
        }
        ~Son(){
            cout << "子类   析构函数" << endl;
        }
};

void test01(){
    // Base b;
    Son s;
}

int main(){
    test01();
    return 0;
}


