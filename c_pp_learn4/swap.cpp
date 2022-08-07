//
// Created by lio on 7/10/22.
//

#include "swap.h"
#include "iostream"
using namespace std;
void swap(int a, int b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    cout << a << "\t" << b << endl;
}