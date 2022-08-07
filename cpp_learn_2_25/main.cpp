/*
友元
    关键子 friend
    特殊访问private

    全局函数做友元
*/

#include <iostream>
#include <string>

using namespace std;

class Building
{
    // 关键子friend
    friend void goodGay(Building *building);
    public:
        Building()
        {
            m_sittingRoom = "客厅";
            m_bedRoom = "卧室";
        }
    public:
        string m_sittingRoom;
    private:
        string m_bedRoom;
};

// 全局函数
void goodGay(Building *building)
{
    cout << "好基友的全局函数正在访问 :" << building->m_sittingRoom << endl;

    cout << "好基友的全局函数正在访问 :" << building->m_bedRoom << endl;
}


void test01()
{
    Building b;
    goodGay(&b);
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