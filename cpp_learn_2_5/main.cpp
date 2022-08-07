#include <iostream>
#include <string>

class Student
{
    // 访问权限
public:

    // 类中的属性和行为 统一称为成员
    // 属性 成员属性 成员变量
    // 行为 成员函数 成员方法

    // 属性
    std::string m_name;
    int m_id;

    // 行为
    void showStudent(void)
    {
        std::cout << "姓名 = " << m_name << " 学号 = " << m_id << std::endl;
    }
    // 给姓名赋值
    void setName(std::string name)
    {
        m_name = name;
    }

    void setId(int id)
    {
        m_id = id;
    }

};

int main(void){
    Student s1;
    s1.m_name = "张三";
    s1.m_id = 1;

    s1.showStudent();

    s1.setName("李四");
    s1.setId(2);
    s1.showStudent();
}