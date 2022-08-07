#include "iostream"
#include "string"

using namespace std;

struct hero{
    string name;
    int age;
    string sex;
};



int main(){
    struct hero heroArry[5] =
    {
            {"张飞", 45, "男"},
            {"赵云", 34, "女"},
            {"诸葛", 23, "男"},
            {"吕布", 20, "男"},
            {"貂蝉", 18, "女"},
    };
    int len = sizeof (heroArry)/ sizeof (heroArry[0]);
    for (int i = 0; i < len; ++i) {
//        cout << heroArry[i].name << "    " << heroArry[i].age << "    " << heroArry[i].sex << endl;
    }
//    冒泡法年龄排序
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i -1; ++j) {
            struct hero temp;
            if(heroArry[j].age > heroArry[j+1].age){
                temp.age = heroArry[j].age;
                heroArry[j].age = heroArry[j+1].age;
                heroArry[j+1].age = temp.age;
            }
        }
    }

    for (int i = 0; i < len; ++i) {
        cout << heroArry[i].name << "    " << heroArry[i].age << "    " << heroArry[i].sex << endl;
    }
    return 0;
}