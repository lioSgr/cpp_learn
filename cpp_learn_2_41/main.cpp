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

#include <iostream>
#include <string>
using namespace std;

// 多态案例 计算器
// class Calculator{
//     public:
//         int getResult(string oper){
//             if(oper == "+"){
//                 return (m_num1 + m_num2);
//             }
//             else if(oper == "-"){
//                 return (m_num1 - m_num2);
//             }
//             else if(oper == "*"){
//                 return (m_num1 * m_num2);
//             }
//         }
//         // 如果扩展功能 要修改源码
//         // 在实际开放中 提倡开闭原则（对扩展进行开放   对修改进行关闭）
//         int m_num1;
//         int m_num2;
// };

// void test01(){
//     Calculator cal;
//     cal.m_num1 = 10;
//     cal.m_num2 = 10;

//     cout << cal.getResult("+") << endl;
//     cout << cal.getResult("-") << endl;
//     cout << cal.getResult("*") << endl;
// }

// 利用多态实现计算器
// 实现计算器的抽象类
class AbstractCalculator{
    public:
        virtual int getResult(){
            return 0;
        }
        int m_num1;
        int m_num2;
};

// 加法计算器类
class AddCalculator : AbstractCalculator{
    public:
        virtual int getResult(){        
            return m_num1 + m_num2;
        }
};

// 减法计算器类
class SubCalculator : AbstractCalculator{
    public:
        virtual int getResult(){        
            return m_num1 - m_num2;
        }
};

// 乘法计算器类
class MulCalculator : AbstractCalculator{
    public:
        virtual int getResult(){        
            return m_num1 * m_num2;
        }
};

void test02(){
    // 多态使用条件 父类的指针或者引用指向子类对象
    AbstractCalculator * abc = new AddCalculator;
    abc->m_num1 = 10;
    abc->m_num2 = 10;
    cout << abc->getResult() << endl;
    delete abc;

    abc = new SubCalculator;
    abc->m_num1 = 10;
    abc->m_num2 = 10;
    cout << abc->getResult() << endl;
    delete abc;

    abc = new MulCalculator;
    abc->m_num1 = 10;
    abc->m_num2 = 10;
    cout << abc->getResult() << endl;
    delete abc;
}

int main(){
    // test01();
    test02();
    return 0;
}


