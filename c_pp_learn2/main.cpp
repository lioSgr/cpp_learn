#include "iostream"
#include "time.h"

using namespace std;
int main(){
    /*
    int score = 0;

    cout << "请输入您的分数" << endl;
    cin >> score;
    cout << "您输入的分数：" << score << endl;

    if(score > 600){
        cout << "level1" << endl;
    }
    else if(score >= 500 && score <600){
        cout << "level2" << endl;
    }
    else if(score >= 400 && score < 500){
        cout << "level3" << endl;
    }
    else{
        cout << "failed" << endl;
    }
     */
/*
    int score = 0;
    cout << "input your score" << endl;
    cin >> score;
    cout << "score = " << score << endl;

    if(score > 600){
        cout << "success" << endl;
        if(score > 600 && score <= 650){
            cout << "level1" << endl;
        }
        else if(score > 650 && score < 600){
            cout << "level2" << endl;
        }
        else{
            cout << "level0" << endl;
        }
    }
*/
/*
    int a = 10;
    int b = 20;
    int c = 30;

    if(a > b){
        if(a > c){
            cout << "a is max" << endl;
        }
        else{
            cout << "c is max" << endl;
        }
    }
    else{
        if(b > c){
            cout << "b is max" << endl;
        }
        else{
            cout << "c is max" << endl;
        }
    }
*/
/*
//三目运算符
    int a = 10;
    int b = 20;
    int c = 0;
    c = a > b ? a : b;
    cout << "c = " << c << endl;

    //三目运算符返回的是变量
    (a > b ? a : b) = 100;
    cout << a << endl;
    cout << b << endl;
*/
/*
    int score = 0;
    cout << "请输出你的分数" << endl;
    cin >> score;
    cout << "您输入的分数 = " << score << endl;

    switch (score) {
        case 10:
            cout << "您认为是经典的电影" << endl;
            break;
        case 9:
            cout << "您认为是好的电影" << endl;
            break;
        case 8:
            cout << "您认为是一般的电影" << endl;
            break;
        default:
            cout << "未找到当前分数匹配的电影评级" << endl;
            break;
    }
*/

/*
    int num = 0;
    while(1)
    {
        cout << num << endl;
        num ++;
    }
*/
/*
    srand((unsigned int) time(NULL));
    int num = rand() % 100 + 1;

    int val = 0;

    while(val != num){
        cout << "请输入你猜测的数" << endl;
        cin >> val;
        if(val > num){
            cout << "猜大了" << endl;
        }
        else if(val < num){
            cout << "猜小了" << endl;
        }
        else{
            cout << "猜对了" << endl;
            break;
        }
    }
*/

/*
    int num = 0;
    do {
        cout << num << endl;
        num ++;
    } while (num < 10);
*/

/*
//水仙花数

    int num = 100;
    do {
        int num1 = num % 10;
        int num2 = num / 10 % 10;
        int num3 = num / 100;
        int val = num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3;
        if(val == num){
            cout << num << endl;
        }
        num ++;
    }while(num < 1000);
*/

/*
    for (int i = 0; i < 3; ++i) {
        cout << i << endl;
    }
*/

/*
    for (int i = 1; i < 100; ++i) {
        if((i % 10 == 7) || (i / 10 % 10 == 7) || (i % 7 == 0)){
            cout << i << "\t敲桌子" << endl;
        }
    }
*/

/*
 * 外层执行一次  内层执行全部
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << "*";
        }
        cout << endl;
    }
*/

/*
 * 乘法表
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < i; ++j) {
            cout << j << "*" << i << "=" << i * j << " ";
        }
        cout << endl;
    }
*/

/*
    cout << "level" << endl;
    int select = 0;
    cin >> select;

    switch (select) {
        case 1:
            cout << "level 1" << endl;
            break;
        case 2:
            cout << "level 2" << endl;
            break;
        case 3:
            cout << "level 3" << endl;
            break;
        default:
            cout << "no select" << endl;
    }
*/


/*
    for (int i = 0; i < 100; ++i) {
        if(i % 2 == 0){
            continue;   //不关闭循环 不执行下列代码
            break;  //退出循环
        }
        cout << i << endl;
    }
*/

/*
    cout << "1" << endl;
    cout << "2" << endl;
    goto FLAG;
    cout << "3" << endl;
    cout << "4" << endl;
    FLAG:
    cout << "5" << endl;
*/
    return 0;
}