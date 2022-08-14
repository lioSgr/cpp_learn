// CPP继承
// 好处：减少重复的代码
// 语法：
//    class 子类 ： 继承方式 父类
//    子类 也称为 派生类； 父类 也称为 基类
// 继承方式：
//      公共继承 私有继承 保护继承

// 继承模型
//      父类中对的非静态成员属性都被子类继承 只是被编译器隐藏了
#include <iostream>
#include <string>
using namespace std;

class Base{
    public:
        int m_a;
    protected:
        int m_b;
    private:
        int m_c;
};

class Son : public Base{
    public:
        int m_d;
};

void test01(){
    // 16 父类中对的非静态成员属性都被子类继承 只是被编译器隐藏了
    cout << sizeof(Son) << endl;
}

int main(){
    test01();
    return 0;
}


