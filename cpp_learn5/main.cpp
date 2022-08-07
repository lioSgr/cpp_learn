//#include <iostream>
//
//using namespace std;
////指针学习
//
//
//
//void swap(int *a, int *b){
//    int temp;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}
//int main() {
////定义指针
//    int a = 10;
////    int *p;
////    p = &a;
//    int * p = &a;
//    cout << &a << endl;
//    cout << p << endl;
////使用指针
////可以通过解引用的方式来找到指针的只想的内存空间
//    *p = 1000;
//    cout << a << endl;
//    cout << *p << endl;
//
//    cout << sizeof (p) << endl;
//    cout << sizeof (int *) << endl;
//    cout << sizeof (float *) << endl;
//    cout << sizeof (double *) << endl;
//    cout << sizeof (char *) << endl;
//
////    空指针用于给指针变量初始化
////空指针不可以访问
//    int * pp = NULL;
//    cout << pp << endl;
//
////野指针
////    int * ppp = 0x1100;
//    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
////    指针常量
//
//    int x = 10;
////    const 修饰指针    指针指向的数值不可以修改 指针的指向可以修改
//    const int * point1 = &x;
//
////    const 修饰常量    指针指向的数值可以修改 指针的指向不可以修改
//    int * const point2 = &x;
//    *point2 = 100;
//
////    const 修饰指针和常量 指针指向的数值不可以修改 指针的指向不可以修改
//    const int * const point3 = &x;
//
////    指针和数组
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    cout << arr[0] << endl;
//
//    int * point4 = arr;
//
//    for (int i = 0; i < 10; ++i){
//        cout << *point4 + i << endl;
//    }
//
//    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
//
//    int aa = 10;
//    int bb = 20;
//
//    swap(aa, bb);
//    cout << aa << "\t" << bb << endl;
//    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
//    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
//    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
//    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
//
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}


#include "iostream"

using namespace std;

void bubble(int * arr, int len){
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArr(int * arr, int len){
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[10] = {2,6,7,0,3,6,8,3,7,3};
    int length = sizeof (arr) / sizeof (arr[0]);
    bubble(arr, length);
    printArr(arr, length);
    return 0;
}
