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
//      多态优点：
//          代码结构清晰
//          可读性强
//          便于后期维护

// 纯虚函数
//      语法：virtual 返回类型 函数名 = 0;
//          1、抽象类无法实例化对象
//          2、子类必须重写父类中的虚函数

#include <iostream>
#include <string>
using namespace std;

// 多态案例制作饮品
class AbstractDrinking{
    public:
        // 煮水
        virtual void Boil() = 0;
        // 冲泡
        virtual void Brew() = 0;
        // 倒入杯中
        virtual void PourInCup() = 0;
        // 加入辅料
        virtual void PutSomething() = 0;

        void makeDring(){
            Boil();
            Brew();
            PourInCup();
            PutSomething();
        }
};

class Coffee : public AbstractDrinking(){
        // 重写纯虚函数
        // 煮水
        virtual void Boil(){
            cout << "煮农夫山泉" << endl;
        };
        // 冲泡
        virtual void Brew(){
            cout << "导入咖啡" << endl;
        };
        // 倒入杯中
        virtual void PourInCup(){
            cout << "倒入杯中" << endl;
        };
        // 加入辅料
        virtual void PutSomething(){
            cout << "加入糖和牛奶" << endl;
        };
};

class Tea : public AbstractDrinking(){
        // 重写纯虚函数
        // 煮水
        virtual void Boil(){
            cout << "煮矿泉水" << endl;
        };
        // 冲泡
        virtual void Brew(){
            cout << "导入茶叶" << endl;
        };
        // 倒入杯中
        virtual void PourInCup(){
            cout << "倒入杯中" << endl;
        };
        // 加入辅料
        virtual void PutSomething(){
            cout << "加入柠檬" << endl;
        };
};

void doWork(AbstractDrinking *abs){
    abs->makeDring();
    delete abs;
}

void test01(){
    doWork(new Coffee);
    cout << "----------------------" << endl;
    doWork(new Tea);
}

int main(){
    test01();
    return 0;
}