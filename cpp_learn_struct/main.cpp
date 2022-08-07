#include "iostream"
#include "string"

using namespace std;

struct student
{
    string name;
    int age;
    float score;
}s3;

struct teacher
{
    int id;
    string name;
    int age;
    struct student stu;
};

//数值传递
void print_student(struct student s)
{
    cout << s.name << endl;
}

//地址传递 节省内存控制 而且不会复制一份副本出来
void print_student1(struct student *s)
{
    s->name = "changeName";
    cout << s->name << endl;
}


void print_student3(const struct student s){
    cout << s.name << endl;
}

int main(){
    cout << "结构体三种定义" << endl;
//    struct关键字可以省略
    struct student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout << "name:" << s1.name << " age:" << s1.age << " score:" << s1.score << endl;

    struct student s2 = {"张三", 20, 100};
    cout << "name:" << s2.name << " age:" << s2.age << " score:" << s2.score << endl;

    s3.name = "张三";
    s3.age = 18;
    s3.score = 100;
    cout << "name:" << s3.name << " age:" << s3.age << " score:" << s3.score << endl;
    cout << "结构体数组" << endl;
    struct student stuArry[3] ={
    {"张三", 45, 64},
    {"李四", 65, 43},
    {"王五", 34, 64}
    };

    stuArry[2].name = "nico",
    stuArry[2].age = 43;
    stuArry[2].score = 23;

    for (int i = 0; i < 3; ++i) {
        cout << "name: " << stuArry[i].name << " age: " << stuArry[i].age << " score: " << stuArry[i].score << endl;
    }
    cout << "结构体指针" << endl;
    struct student s = {"张三", 20, 100};
    struct student * p = &s;
    cout << "name: " << p->name  << " age:" << p->age << " score: " << p->score << endl;
    cout << "结构体嵌套结构体" << endl;
    teacher t;
    t.id = 23;
    t.name = "lio";
    t.age = 45;
    t.stu.age = 12;
    t.stu.name = "hi";
    t.stu.score = 100;
    cout << t.name << t.stu.name << endl;
    cout << "结构体参数传递" << endl;
    struct student ss = {"张三", 20, 100};
//    cout << "name:" << ss.name << " age:" << ss.age << " score:" << ss.score << endl;
    print_student(ss);
    print_student1(&ss);

    cout << "const修饰结构体" << endl;
    struct student sss = {"张三", 20, 100};

    print_student3(sss);
    return 0;
}