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

// 菱形继承
//      概念：两个派生类继承了基类  第三个类继承了两个派生类
//      核心：继承之前加上virtual关键字

// 多态
//      静态多态：函数重载  运算法重载 （复用函数名）
//      动态多态：派生类和虚函数实现运行时多态
//      两种多态区别
//          静态多态：早绑定；便以极端确定函数地址
//          动态多态：晚绑定；运行时确定函数地址
//      动态多态满足条件
//          1、有继承关系
//          2、子类要重写父类的虚函数 重写：函数返回类型 函数名称 参数列表 完全相同
//      动态多态的使用：
//          父类的指针或者引用来指向子类的对象

#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        virtual void speak(){
            cout << "animal speak" << endl;
        }
};

class Cat : public Animal{
    public:
        void speak(){
            cout << "cat speak" << endl;
        }
};
class Dog : public Animal{
    public:
        void speak(){
            cout << "dog speak" << endl;
        }
};

// 执行说话的函数
// 地址早绑定   在编译阶段就确定函数地址
// 如果想执行猫说话 那么这个函数地址就应该晚绑定    使用关键字virtual实现晚绑定
void doSpeak(Animal &animal){   //Animal & animal = cat
    animal.speak();
}

void test01(){
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}

void test02(){
    cout << sizeof(Animal) << endl;
}

int main(){
    test01();
    test02();
    return 0;
}


