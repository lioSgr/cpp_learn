// CPP继承
// 好处：减少重复的代码
// 语法：
//    class 子类 ： 继承方式 父类
//    子类 也称为 派生类； 父类 也称为 基类
// 继承方式：
//      公共继承 私有继承 保护继承

// 继承模型
//      父类中对的非静态成员属性都被子类继承 只是被编译器隐藏了

// 继承中构造和析构的顺序
//      父类子类构造 和 析构 顺序
//      继承中构造和析构的顺序如下
//          先构造父类 再构造子类   析构 先析构子类 再析构父类

// 继承同名成员处理
//      访问子类成员 直接访问
//      访问父类同名成员    添加

// 继承同名静态成员处理
//      访问子类 直接访问
//      访问父类 添加作用域

// 多继承语法   实际开发中不建议使用
//      语法：
//          class 子类 ： 继承方式 父类1，父类2

// 菱形继承
//      概念：两个派生类继承了基类  第三个类继承了两个派生类
//      核心：继承之前加上virtual关键字

// 多态
//      静态多态：函数重载  运算法重载 （复用函数名）
//      动态多态：派生类和虚函数实现运行时多态
//      两种多态区别
//          静态多态：早绑定；便以极端确定函数地址
//          动态多态：晚绑定；运行时确定函数地址
//      动态多态满足条件
//          1、有继承关系
//          2、子类要重写父类的虚函数 重写：函数返回类型 函数名称 参数列表 完全相同
//      动态多态的使用：
//          父类的指针或者引用来指向子类的对象
//      多态优点：
//          代码结构清晰
//          可读性强
//          便于后期维护

// 纯虚函数
//      语法：virtual 返回类型 函数名 = 0;
//          1、抽象类无法实例化对象
//          2、子类必须重写父类中的虚函数

// 虚析构 纯虚析构
//      针对父类指针释放子类对象问题

#include <iostream>
#include <string>
using namespace std;

// 多态案例组装电脑
// 抽象CPU类
class Cpu{
    public:
        virtual void calculate() = 0;
};
// 抽象显卡类
class VideoCard{
    public:
        virtual void display() = 0;
};
// 抽象内存条类
class Memory{
    public:
        virtual void storage() = 0;
};
// 电脑类
class Computer{
    public:
        Computer(Cpu * cpu, VideoCard * vc, Memory * mem){
            m_cpu = cpu;
            m_vc = vc;
            m_mem = mem;
        }

        void work(){
            m_cpu->calculate();
            m_vc->display();
            m_mem->storage();
        }
    private:
        Cpu *m_cpu;
        VideoCard *m_vc;
        Memory *m_mem;
};

class IntelCpu : public Cpu{
    public:
        virtual void calculate(){
            cout << "intel cpu 开始计算了" << endl;
        }
};

class IntelVideoCard : public VideoCard{
    public:
        virtual void display(){
            cout << "intel Video 开始显示了" << endl;
        }
};

class IntelMemory : public Memory{
    public:
        virtual void storage(){
            cout << "intel memory 开始存储了" << endl;
        }
};

class LenovoCpu : public Cpu{
    public:
        virtual void calculate(){
            cout << "Lenovo cpu 开始计算了" << endl;
        }
};

class LenovoVideoCard : public VideoCard{
    public:
        virtual void display(){
            cout << "Lenovo Video 开始显示了" << endl;
        }
};

class LenovoMemory : public Memory{
    public:
        virtual void storage(){
            cout << "Lenovo memory 开始存储了" << endl;
        }
};

void test01(){
    Cpu * interCpu = new IntelCpu;
    VideoCard * intelVideoCard = new IntelVideoCard;
    Memory * intelMemory = new IntelMemory;
    
    Computer * computer1 = Computer(IntelCpu, intelVideoCard, intelMemory);
    computer1->work();
    delete computer1;

    Computer * computer2 = Computer(new LenovoCpu, new LenvoVideoCard, new LenvoMemory);
    computer1->work();
    delete computer2;
}

int main(){
    test01();
    return 0;
}