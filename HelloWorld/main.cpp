#include "iostream"
#include "string"
using namespace std;

#define DAY 7

//单行注释
/*多行注释
 * */

//1、标识符不能是关键字
//2、字母数字下划线
//3、首字母必须是字母 下划线
//4、标识符区分大小写

//数据类型存在的意义：给变量分配合适的内存空间
int main(){
    int a = 10;

    int abc = 12;
    int adc_2 = 32;
    int _34 = 23;
//    int 3_jiu = 23;
    int aaa = 100;

    int AAA =  2324;

    cout << AAA << endl;
    cout << aaa << endl;

    cout << "一周总共有：" << DAY << "天" << endl;

    cout << "a = " << a << endl;

    const int mouth = 12;

    cout << "mouth = " << mouth << endl;

//    在屏幕中输出Hello World
    cout << "Hello World" << endl;

    short num1 = 10;
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;

    cout << "num1 = " << num1 << "; " << sizeof(short)<< endl;
    cout << "num2 = " << num2 << "; " << sizeof(int)<< endl;
    cout << "num3 = " << num3 << "; " << sizeof(long)<< endl;
    cout << "num4 = " << num4 << "; " << sizeof(long long )<< endl;

    float f1 = 3.1415926f;
    double f2 = 3.1415926;

    cout << f1 << " size of float = " << sizeof (float ) << endl;

    cout << f2 << " size of double = " << sizeof (double )<< endl;

    float f3 = 3e2;

    cout << f3 << endl;

    float f4 = 3e-2;

    cout << f4 << endl;

    char ch = 'a';
    cout << ch << endl;
    cout << sizeof (char ) << endl;
    cout << (int )ch << endl;

    char ch2 = 'A';
    cout << ch2 << endl;
    cout << sizeof (char ) << endl;
    cout << (int )ch2 << endl;

//    转义字符 \n \t
    cout << "hello world\n";

    cout << "\\" << endl;

    cout << "aaaa\thello world" << endl;
    cout << "aaa\thello world" << endl;
    cout << "aaaaaa\thello world" << endl;

    char str[] = "helloWorld";
    cout << str << endl;

    string str2 = "tyjhgyuij";

    cout << str2 << endl;

    bool flag = true;

    cout << flag << endl;

    flag = false;

    cout << flag << endl;

    cout << sizeof (bool) << endl;
    cout << "**************************************" << endl;

//    int val1 = 0;
//    cout << "请给整形变量复制" << endl;
//    cin >> val1;
//    cout << val1 << endl;
//
//    float val2 = 0;
//    cout << "请给浮点型变量复制" << endl;
//    cin >> val2;
//    cout << val2 << endl;
//
//    char val3 = 0;
//    cout << "请给字符型变量复制" << endl;
//    cin >> val3;
//    cout << val3 << endl;
//
//    string val4 = "tyjhgyuij";
//    cout << "请给字符串型变量复制" << endl;
//    cin >> val4;
//    cout << val4 << endl;
//
//    bool val5 = false;
//    cout << "请给字布尔型变量复制" << endl;
//    cin >> val5;
//    cout << val5 << endl;
    cout << "**************************************" << endl;

    int a1 = 10;
    int a2 = 3;
    cout << a1 + a2 << endl;
    cout << a1 - a2 << endl;
    cout << a1 * a2 << endl;
    cout << a1 / a2 << endl;

    int a3 = 10;
    int b3 = 3;
    cout << a3 % b3 << endl;
    cout << "**************************************" << endl;

//    前置递增  后置递增    区别
    int x = 10;
    int y = 10;
    x++;
    ++y;
    cout << x << "-----" << y << endl;
    cout << "**************************************" << endl;

    int x1 = 10;
    int y1 = x1++;
    cout << x1 << "-----" << y1 << endl;
    cout << "**************************************" << endl;

    int x2 = 10;
    int y2 = ++x1;
    cout << x1 << "-----" << y1 << endl;
    cout << "**************************************" << endl;

    int x3 = 10;
    cout << x3 << endl;
    x3 = 100;
    cout << x3 << endl;
    x3 = 10;
    x3 += 2;
    cout << x3 << endl;
    x3 = 10;
    x3 -= 2;
    cout << x3 << endl;
    x3 = 10;
    x3 *= 2;
    cout << x3 << endl;
    x3 = 10;
    x3 /= 2;
    cout << x3 << endl;
    x3 = 10;
    x3 %= 2;
    cout << x3 << endl;
    cout << "**************************************" << endl;


    int x4 = 10;
    int y4 = 20;

    cout << (x4 == y4) << endl;
    cout << (x4 != y4) << endl;
    cout << (x4 > y4) << endl;
    cout << (x4 < y4) << endl;
    cout << (x4 >= y4) << endl;
    cout << (x4 <= y4) << endl;
    cout << "**************************************" << endl;

    int _a = 10;
    cout << !_a << endl;
    cout << !!_a << endl;

    int __a = 10;
    int __b = 10;
    cout << (__a && __b) << endl;

    bool ___a = false;
    bool ___b = false;
    cout << (___a || ___b) << endl;
    cout << "**************************************" << endl;


    return  0;

}