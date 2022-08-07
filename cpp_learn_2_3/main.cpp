#include <iostream>

//函数默认参数
//如果传入使用传入数值，没有则用默认数值
//注意事项 如果某个位置有个默认参数，则从左往右都要有默认参数
int func(int a, int b = 10, int c = 10){
    return a + b + c;
}

////注意事项 如果某个位置有个默认参数，则从左往右都要有默认参数
//int func(int a, int b = 10, int c){
//    return a + b + c;
//}

////如果函数声明有默认参数 函数实现则不能有默认参数
//int func2(int a, int b = 10);
//
//int func2(int a, int b = 10){
//    return a + b;
//}

//占位参数
//语法 函数类型（数据类型 变量名 数据类型）
//目前阶段的占位参数用不到 后面用到
//占位参数还可以有默认参数
int func3(int a, int = 10){
    std::cout << "this func" << std::endl;
}

////函数重载
//函数名相同 提高复用性
//作用域相同
//函数名相同
//函数参数类型不同 个数不同 顺序不同
//函数的返回数值不能作为函数重载的条件
void func4(void){
    std::cout << "func4-1 调用" << std::endl;
}

void func4(int a){
    std::cout << "func4-2 调用" << std::endl;
}

void func4(int a, int b){
    std::cout << "func4-3 调用" << std::endl;
}

//函数重载的注意事项
//引用作为函数重载的条件
void func5(int &a){
    std::cout << "func5-1" << std::endl;
}

void func5(const int &a){
    std::cout << "func5-2" << std::endl;
}
//函数重载遇到默认参数
void func6(int a){
    std::cout << "func6-1" << std::endl;
}
void func6(int a, int b = 20){
    std::cout << "func6-2" << std::endl;
}
int main() {
    std::cout << func(10, 20) << std::endl;

    func3(10, 40);

    func4(1);

    int a = 10;
    func5(a);
    func5(10);

//    func6(10);出现二义性

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
