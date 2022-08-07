//引用
//本质：给变量起别名
//语法：数据类型 &别名 = 原名
//注意事项：
//    引用必须初始化；引用一旦初始化后不可以更改

//引用做函数参数
//引用做函数的返回值
//    注意事项：不要返回局部变量的引用
//            函数的调用可以作为左值

//引用本质的就是指针常量   int* const ref = &a;

//常量引用：修饰形参防止误操作

#include <iostream>

using namespace std;

//交换函数
//数值传递  不改变实参
void mySwap1(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}
//地址传递  改变实参
void mySwap2(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
//引用传递 引用改变实参
void mySwap3(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int& func_test01(void){
    int a = 10;
    return a;
}

int& func_test02(void){
    static int a = 10;
    return a;
}

void func_test03(int &ref){
    ref = 666;
}

//引用用const修饰
void showValue(const int &val){
//    val = 500;
    cout << "val = " << val << endl;
}

int main() {
    int a = 10;
    int b = 20;
    int &c = a;
    cout << "a = " << a << " c = " << c << endl;
    c = 100;
    cout << "a = " << a << " c = " << c << endl;

    c = 10;

    mySwap1(a, b);
    cout << "a = " << a << " b = " << b << endl;

    mySwap2(&a, &b);
    cout << "a = " << a << " b = " << b << endl;

    mySwap3(a, b);
    cout << "a = " << a << " b = " << b << endl;

//    int &ref = func_test01();
//    cout << "ref = " << ref << endl;

    int &ref = func_test02();
    cout << "ref = " << ref << endl;
    func_test02() = 1000;
    cout << "ref = " << ref << endl;

    int &ref1 = a;
    ref1 = 555;
    cout << "a = " << a << " ref1 = " << ref1 << endl;
    func_test03(a);
    cout << "a = " << a << " ref1 = " << ref1 << endl;

    int d = 99;
    const int & ref2 = 10;  //int temp = 10; ref2 = &temp;

    showValue(d);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
