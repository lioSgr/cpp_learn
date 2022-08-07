#include "iostream"
#include "string"

#define MAX 1000

using namespace std;

struct Person{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Address;
};

struct Addressbooks{
    struct Person personArray[MAX];
    int m_Size;
};


void show_menu(void)
{
    cout << "***************************" << endl;
    cout << "*****   1、添加联系人   *****" << endl;
    cout << "*****   2、显示联系人   *****" << endl;
    cout << "*****   3、删除联系人   *****" << endl;
    cout << "*****   4、查找联系人   *****" << endl;
    cout << "*****   5、修改联系人   *****" << endl;
    cout << "*****   6、清空联系人   *****" << endl;
    cout << "*****   0、退出通讯录   *****" << endl;
    cout << "***************************" << endl;
}

void add_person(struct Addressbooks *abs)
{
    if(abs->m_Size == MAX)
    {
        cout << "通讯录已经满" << endl;
    }
    else
    {
        string name;
        cout << "请输入一个姓名" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        int sex;
        cout << "请输入一个性别" << endl;
        cout << "man-----1" << endl;
        cout << "woman---2" << endl;
        while (true)
        {
            cin >> sex;
            if(sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "输入非法，请重新输入" << endl;
        }

        int age;
        cout << "请输入一个年龄" << endl;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        string phone;
        cout << "请输入一个电话" << endl;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        string address;
        cout << "请输入一个地址" << endl;
        cin >> address;
        abs->personArray[abs->m_Size].m_Address = address;

        cout << "信息添加成功" << endl;
        abs->m_Size ++;
    }
}

void show_person(struct Addressbooks * abs)
{
    if(abs->m_Size == 0)
    {
        cout << "通讯录为空" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; ++i)
        {
            cout << abs->personArray->m_Name << "\t" << (abs->personArray->m_Sex == 1 ? "男" : "女") << abs->personArray->m_Age << "\t" \
                 << abs->personArray->m_Phone << "\t" << abs->personArray->m_Address << endl;
        }
    }
    system("clear");
}

int person_exist(struct Addressbooks *abs, string name)
{
    for (int i = 0; i < abs->m_Size; ++i) {
        if(name == abs->personArray[i].m_Name)
        {
            return i;
        }
    }
    return -1;
}

void delete_person(struct Addressbooks *abs)
{
    string name;
    cout << "请输入删除联系人姓名" << endl;
    cin >> name;
    int ret = person_exist(abs, name);
    if(ret != -1)
    {
        //前移动覆盖,总数减一
        for (int i = ret; i < abs->m_Size; ++i) {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_Size --;
    }
    else
    {
        cout << "查无此人" << endl;
    }
}

void find_person(struct Addressbooks * abs)
{
    string name;
    cout << "请输入查询联系人姓名" << endl;
    cin >> name;
    int ret = person_exist(abs, name);
    if(ret != -1)
    {
        for (int i = 0; i < abs->m_Size; ++i) {
            if(name == abs->personArray[i].m_Name) {
                cout << abs->personArray->m_Name << "\t" << (abs->personArray->m_Sex == 1 ? "男" : "女") << abs->personArray->m_Age << "\t" \
                 << abs->personArray->m_Phone << "\t" << abs->personArray->m_Address << endl;
                 cout << "在通讯录第" << i + 1 << "个联系人" << endl;
            }
        }
    }
    else
    {
        cout << "查无此人" << endl;
    }
}

void modify_person(struct Addressbooks * abs)
{
    string name;
    cout << "请输入修改联系人姓名" << endl;
    cin >> name;
    int ret = person_exist(abs, name);
    if(ret != -1)
    {
        string name;
        cout << "请输入姓名" << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;

        while (true) {
            int sex;
            cout << "请输入一个性别" << endl;
            cout << "man-----1" << endl;
            cout << "woman---2" << endl;
            cin >> sex;
            if(sex == 1 || sex == 2){
                abs->personArray[ret].m_Sex = sex;
                break;
            }
            else
            {
                cout << "输入非法，重新输入" << endl;
            }
        }

        int age;
        cout << "请输入年龄" << endl;
        cin >> age;
        abs->personArray[ret].m_Age = age;

        string addr;
        cout << "请输入地址" << endl;
        cin >> addr;
        abs->personArray[ret].m_Address = addr;

    }
    else
    {
        cout << "查无此人" << endl;
    }
}

void empty_person(struct Addressbooks * abs)
{
    cout << "请再次确认清空通讯录?yes/no" << endl;
    string input;
    cin >> input;
    if(input == "yes"){
        abs->m_Size == 0;
        cout << "清空通讯录完成" << endl;
    }
    else
    {
        cout << "就知道你这傻蛋会后悔" << endl;
    }
}

int main()
{
    int select = 0;
    Addressbooks abs;
    abs.m_Size = 0;
    //显示菜单
    while (true)
    {
        show_menu();
        cin >> select;
        switch (select)
        {
            case 1://1、添加联系人
                add_person(&abs);
                break;
            case 2://2、显示联系人
                show_person(&abs);
                break;
            case 3://3、删除联系人
                delete_person(&abs);
                break;
            case 4://4、查找联系人
                find_person(&abs);
                break;
            case 5://5、修改联系人
                modify_person(&abs);
                break;
            case 6://6、清空联系人
                empty_person(&abs);
                break;
            case 0://0、退出通讯录
                cout << "欢迎下次使用" << endl;
                return 0;
            default:
                break;
        }
    }
    return 0;
}