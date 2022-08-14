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

#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        int m_age;
};
// 利用虚继承 解决菱形继承的问题
// 继承之前加上virtual关键字
class Sheep : virtual public Animal{
};
class Tuo : virtual public Animal{
};

class SheepTuo : public Sheep, Tuo{
};


// 同名静态成员属性
void test01(){
    SheepTuo st;
    // 菱形继承 两个父类拥有两个相同数据 需要加以作用域区分
    st.Sheep::m_age = 18;
    st.Tuo::m_age = 28;
    // 这个数据只需一份 菱形继承导致数据两个 造成资源浪费
}

// 同名成员函数
void test02(){

}

int main(){
    test01();
    test02();
    return 0;
}


