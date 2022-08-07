#include <iostream>


// CPP class struct 区别
// class    默认权限私有
// struct   默认权限公共

class C1{
    // 默认权限 私有
    int a;
};

struct C2{
    // 默认权限公共
    int a;
};

int main(void){
    C1 c1;
    // c1.a = 100;
    C2 c2;
    c2.a = 100;
    return 0;
}