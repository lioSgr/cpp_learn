//#include "iostream"
//
//using namespace std;
//
//float func_sum(float x, float y){
//    float sum = 0;
//    sum = x + y;
//    return sum;
//}
//
//int main(){
//    float a = 10;
//    float b = 20;
//
//    func_sum(a, b);
//
//    cout << func_sum(a, b) << endl;
//    return  0;
//}

//#include "iostream"
//using namespace std;
//void swip(int num1, int num2){
//    cout << "交换前" << num1 << "\t" << num2 << endl;
//    int temp = num1;
//    num1 = num2;
//    num2 = temp;
//    cout << "交换前" << num1 << "\t" << num2 << endl;
//    return;
//}
//int main(){
//    swip(10, 20);
//    return 0;
//}

#include "iostream"
#include "swap.h"

using namespace std;

int main(){
    int a = 10;
    int b = 20;
    swap(a, b);
    return 0;
}