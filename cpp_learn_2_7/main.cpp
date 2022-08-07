#include <iostream>
#include <string>

// 访问权限
// 三种
// 公共权限 public      类内可以访问    类外可以访问
// 保护权限 protected   类内可以访问    类外不可以访问      儿子可以访问父亲保护的内容
// 私有权限 private     类内可以访问    类外不可以访问      儿子不可以访问父亲保护的内容


class Person{
public:
    // 公共权限
    std::string p_name;
protected:
    std::string p_car;
private:
    int p_password;

public:
    void func(void){
        p_name = "张三";
        p_car = "拖拉机";
        p_password = 0;
    }
};

int main(void){
    Person p1;
    p1.p_name = "张三";
    // p1.p_car = "奔驰";
    // p1.p_password = 9;
    p1.func();
    return 0;
}