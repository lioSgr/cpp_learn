/*
友元：
    全局函数做友元
    类做友元
*/

#include <iostream>
#include <string>

using namespace std;

class Building
{
    // GoodGay是本类的好朋友 可以访问私有成员
    friend class GoodGay;
    public:
        Building();
        string m_sittingRoom;
    private:
        string m_bedRoom;
};

class GoodGay
{
    public:
        GoodGay();
        void visit();
        Building * m_building;
};

Building::Building()
{
    m_sittingRoom = "客厅";
    m_bedRoom = "卧室";
}

GoodGay::GoodGay()
{
    m_building = new Building;
}

void GoodGay::visit()
{
    cout << "好基友正在访问" << m_building->m_sittingRoom << endl;

    cout << "好基友正在访问" << m_building->m_bedRoom << endl;
}


void test01()
{
    GoodGay gg;
    gg.visit();
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