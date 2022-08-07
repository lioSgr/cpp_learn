/*
 *
 *空指针调用成员函数
 * 
 * 
 * 
 */

#include <iostream>
#include <string.h>


class Person
{
    public:
        void showClassName()
        {
            std::cout << "this is class name" << std::endl;
        }

        void showPersonAge()
        {
            // TODO:传入的指针为空
            if(this == NULL)
            {
                return;
            }
            std::cout << this->m_Age << std::endl;
        }

        int m_Age;
};

void test01()
{
    Person *p = NULL;
    p->showClassName();
    
    p->showPersonAge();
}

int main(void){
    test01();
    return 0;
}