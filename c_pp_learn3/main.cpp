#include "iostream"
#include "string"

using namespace std;
int main(){
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    for (int i = 0; i < 5; ++i) {
        cout << "arr = " << arr[i] << endl;
    }

    int arr2[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; ++i) {
        cout << "arr2 = "  << arr2[i] << endl;
    }

    int arr3[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    for (int i = 0; i < 9; ++i) {
        cout << "arr3 = "  << arr3[i] << endl;
    }
/////////////////////////////////////////////////////////////////////////////////////
    int arr4[5] = {1, 2, 3, 4, 5};
    cout << sizeof(arr4) << "\t" << sizeof(arr4[0]) << "\t" << sizeof(arr4)/sizeof(arr4[0]) << endl;
    cout << arr4 << "\t" <<  &arr4[0] << endl;

    /////////////////////////////////////////////////////////////////////////////////////
//    算法 求最大数值
    int arr5[5] = {100, 230, 400, 500, 600};
    int max = 0;
    for (int i = 0; i < 5; ++i) {
        if(arr5[i] > max){
            max = arr5[i];
        }
    }
    cout << "max val is = " << max << endl;
    cout << "/////////////////////////////////////////////////////////////////////////////////////" << endl;
//  数组逆置
    int arr6[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        cout << arr6[i] << endl;
    }
    int start = 0;
    int end = (sizeof(arr6) - 1)/ sizeof(arr6[0]);
    while (start < end){
        int temp = arr6[start];
        arr6[start] = arr6[end];
        arr6[end] = temp;
        start ++;
        end --;
    }
    for (int i = 0; i < 5; ++i) {
        cout << arr6[i] << endl;
    }
    cout << "/////////////////////////////////////////////////////////////////////////////////////" << endl;
//    冒泡排序
    int arr7[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    for (int i = 0; i < 9; ++i) {
        cout << arr7[i] << endl;
    }
//    排序轮数 = 元素个数-1
    for (int i = 0; i < 9-1; i++) {
//        次数 = 元素个数 -  当前轮数 - 1
        for (int j = 0; j < 9-i-1; j++) {
            if(arr7[j] > arr7[j + 1]){
                int temp = arr7[j];
                arr7[j] = arr7[j + 1];
                arr7[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 9; ++i) {
        cout << arr7[i] << endl;
    }
    cout << "/////////////////////////////////////////////////////////////////////////////////////" << endl;

    int arr8[2][3];
    arr8[0][0] = 1;
    arr8[0][1] = 2;
    arr8[0][2] = 3;
    arr8[1][0] = 4;
    arr8[1][1] = 5;
    arr8[1][2] = 6;


    int arr9[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr8[i][j] << ",";
        }
        cout << endl;
    }

    int arr10[2][3] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr10[i][j] << ",";
        }
        cout << endl;
    }
    cout << "/////////////////////////////////////////////////////////////////////////////////////" << endl;
    int arr11[2][3] = {
            {1,2,3},
            {4,5,6}
    };
    string name[3] = {"张三", "李四", "王五"};
    cout << sizeof(arr11) << endl;
    cout << sizeof(arr11[0]) << endl;
    cout << sizeof(arr11[0][0]) << endl;
    cout << sizeof (arr11) / sizeof(arr11[0]) << endl;
    cout << sizeof (arr11[0]) / sizeof(arr11[0][0]) << endl;
    cout << &arr11 << endl;
    cout << "/////////////////////////////////////////////////////////////////////////////////////" << endl;
    int score[3][3] = {
            {100, 100, 100},
            {90, 50, 100},
            {60, 70, 80}
    };
    for (int i = 0; i < 3; ++i) {
        int sum = 0;
        for (int j = 0; j < 3; ++j) {
            sum += score[i][j];
            cout << score[i][i] << ",";
        }
        cout << endl;
        cout << "第" << name[i] << "个人的总分" << sum << endl;
    }
    return 0;
}