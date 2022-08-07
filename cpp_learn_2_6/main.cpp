#include <iostream>
#include <string.h>


// 类中属性 和 成员 成为成员
//      属性：成员变量  成员属性
//      行为：成员方法  成员方法
class Student{
public:
    std::string s_name;
    int s_id;

    void showStudent(void){
        std::cout << s_name << "\t" << s_id << std::endl;
    }

    void setStudentName(std::string name){
        s_name = name;
    }

    void setStudentId(int id){
        s_id = id;
    }
};


int main(void){
    // 实例化对象
    Student s1;
    s1.s_name = "张三";
    s1.s_id = 1;
    s1.showStudent();

    Student s2;
    s2.s_name = "张三";
    s2.s_id = 1;
    s2.showStudent();
    s2.setStudentName("李四");
    s2.showStudent();

    s2.setStudentId(18);
    s2.showStudent();

    return 0;
}