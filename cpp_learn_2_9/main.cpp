#include <iostream>
#include <string.h>


// 成员属性设置私有
// 好处1：自己控制读写权限
// 好处2：对于写 可以检测数据的有效性

class Person{
public:
    // 写姓名
    void setName(std::string name){
        m_name = name;
    }
    // 获取姓名
    std::string getName(void){
        return m_name;
    }

    int getAge(void){
        // m_age = 0;
        return m_age;
    }
    // 设置年龄设置有效的范围
    void setAge(int age){
        if(age < 0 || age > 150){
            std::cout << "age input is error" << std::endl;
            return;
        }
        m_age = age;
    }

    void setLover(std::string lover){
        m_lover = lover;
    }

private:
    // 可读可写
    std::string m_name;
    // 只读 可写
    int m_age;
    // 只写
    std::string m_lover;
};

int main(void){
    Person p1;

    p1.setName("lio");
    std::cout << p1.getName() << std::endl;

    // std::cout << p1.getAge() << std::endl;

    p1.setLover("胖姐");

    p1.setAge(18);
    std::cout << p1.getAge() << std::endl;
    
    return 0;
}