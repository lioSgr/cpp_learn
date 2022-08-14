// CPP继承
// 好处：减少重复的代码
// 语法：
//    class 子类 ： 继承方式 父类
//    子类 也称为 派生类； 父类 也称为 基类
// 继承方式：
//      公共继承 私有继承 保护继承

#include <iostream>
#include <string>
using namespace std;


class Base1{
    public:
        int m_a;
    protected:
        int m_b;
    private:
        int m_c;
};

class Son1 : public Base1{
    public:
        void func(){
            m_a = 10;   //父类中的公共权限成员 到子类 依然是公共权限
            m_b = 10;   //父类中的保护权限成员 到子类 依然是保护权限
            // m_c = 10;   //父类中的私有权限成员 到子类 不可以访问
        }
};

void test01(){
    Son1 s1;
    s1.m_a = 100;
    // s1.m_b = 100;   //到了son1 保护权限 类外访问不到
}

class Base2{
    public:
        int m_a;
    protected:
        int m_b;
    private:
        int m_c;
};

class Son2 : protected Base1{
    protected:
        void func(){
            m_a = 10;   //父类中的公共权限成员 到子类 变成保护权限
            m_b = 10;   //父类中的保护权限成员 到子类 依然是保护权限
            // m_c = 10;   //父类中的私有权限成员 到子类 不可以访问
        }
};

void test02(){
    Son2 s1;
    // s1.m_a = 100;    //保护权限 类外不可以访问
    // s1.m_b = 100;   //到了son2 保护权限 类外访问不到
}

class Base3{
    public:
        int m_a;
    protected:
        int m_b;
    private:
        int m_c;
};

class Son3 : private Base1{
    protected:
        void func(){
            m_a = 10;   //父类中的公共权限成员 到子类 变成私有权限
            m_b = 10;   //父类中的保护权限成员 到子类 变成私有权限
            // m_c = 10;   //父类中的私有权限成员 到子类 不可以访问
        }
};

void test03(){
    Son3 s1;
    // s1.m_a = 100;    //私有权限 类外不可以访问
    // s1.m_b = 100;   //到了son3 私有权限 类外访问不到
}

class GrandSon3 : private Son3{
    protected:
        // 孙子访问不到 父类变成私有
        void func(){
            // m_a = 10;   //私有权限成员 到子类 不可以访问
            // m_b = 10;   //私有权限成员 到子类 不可以访问
            // m_c = 10;   //父类中的私有权限成员 到子类 不可以访问
        }
};

int main(){
    test01();
    return 0;
}


