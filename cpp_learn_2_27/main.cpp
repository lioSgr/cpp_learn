/*
友元：
    全局函数做友元
    类做友元
    成员函数做友元
*/

#include <iostream>
#include <string>

using namespace std;

class Building;

class GoodGay
{
    public:
        GoodGay();
        void visit();   //访问私有成员
        void visit2();  //不可以访问私有成员
        Building *m_building;
};

class Building
{
    friend void GoodGay::visit();
    friend void GoodGay::visit2();
    public:
        Building();
        string m_sittingRoom;
    private:
        string m_bedRoom;
};

GoodGay::GoodGay()
{
    m_building = new Building;
}

void GoodGay::visit()
{
    cout << "好基友正在访问" << m_building->m_sittingRoom << endl;

    cout << "好基友正在访问" << m_building->m_bedRoom << endl;
}

void GoodGay::visit2()
{
    cout << "好基友正在访问" << m_building->m_sittingRoom << endl;

    cout << "好基友正在访问" << m_building->m_bedRoom << endl;
}

Building::Building()
{
    m_sittingRoom = "客厅";
    m_bedRoom = "卧室";
}

void test01()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();
}

void test02()
{
    ;
}

int main()
{
    test01();
    test02();
    return 0;
}