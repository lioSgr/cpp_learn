//#include <iostream>
//
//using namespace std;
//
//int* func(void){
//    int a = 10;
//    return &a;
//}
//
////堆
////
//int* func1(){
////    利用new关键字可以将数据开辟到堆区
//    int * p = new int(10);
//    return p;
//}
//
//int g_a = 10;
//int g_b = 10;
//int main() {
//
//    int a  = 10;
//    int b = 10;
//
//    cout << "a adrr " << &a << endl;
//    cout << "b adrr " << &b << endl;
//    cout << "g_a adrr " << &g_a << endl;
//    cout << "g_b adrr " << &g_b << endl;
//
////    静态变量
//    static int s_a = 10;
//    cout << "s_b addr " << &s_a << endl;
//
////    常量 字符串常量 const修饰的变量
//    cout << "str addr " << &"hello" << endl;
//    const int c_g_a = 10;
//    cout << "consta addr " << &c_g_a << endl;
//
//    int* p = func();
//    cout << *p << endl;
//    cout << *p << endl;
//
//    int* pp = func1();
//    cout << *pp << endl;
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}



#include "iostream"

using namespace std;

int * func(void){
    int * p = new int(10);
    return p;
}

int * func2(void ){
//    创建数组
    int * arr = new int[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << endl;
    }
//    释放堆区数组
    delete[] arr;
}

int main(void){
    int *p = func();
    cout << *p << endl;
//    释放数据
    delete p;
    cout << *p << endl;

    func2();
    return 0;
}




/*内存分区模型
 * 代码区：存放代码
 *       特点：共享 只读
 * 全局区：全局变量 静态变量 常量
 *      内存分布 前-->后面     局部变量 局部常量（const）  全局常量  静态变量（字符串常量 const修饰的变量）
 * 栈区：编译器自动分配   参数值 局部变量 形参等
 *      注意事项：不要返回局部变量的地址
 *              编译器管理和释放
 * 堆区：程序员分配和释放 若不释放程序结束系统自动释放
 *      开辟数据 关键字new
 *      释放数据 关键字delete delete[]
 * */

// g global
// l local
// c const
