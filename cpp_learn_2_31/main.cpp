// CPP继承

#include <iostream>
#include <string>
using namespace std;

// 继承
// 好处：减少重复的代码
// 语法：
//    class 子类 ： 继承方式 父类
//    子类 也称为 派生类 父类 也称为 基类

class BasePage{
    public:
        void header(){
            cout << "首页" << endl;
        }
        void footer(){
            cout << "头部" << endl;
        }
        void left(){
            cout << "公共列表" << endl;
        }
};

class Java : public BasePage{
    public:
        void content(){
            cout << "Java学科视频" << endl;
        }
};

class Cpp : public BasePage{
    public:
        void content(){
            cout << "Cpp学科视频" << endl;
        }
};


void test01(){
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.left();
    cout << "----------------------------------" << endl;
}

int main(){
    test01();
    return 0;
}