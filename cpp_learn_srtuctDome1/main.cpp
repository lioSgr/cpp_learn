#include "iostream"
#include "string"
#include "time.h"

using namespace std;
struct student{
    string sName;
    int Sscore;
};

struct teacher{
    string tName;
    struct student sArry[5];
};

void allocateSpace(struct teacher tArry[], int len){
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; ++i) {
        tArry[i].tName = "teacher_";
        tArry[i].tName += nameSeed[i];
        for (int j = 0; j < 5; ++j) {
            tArry[i].sArry->sName = "student_";
            tArry[i].sArry->sName += nameSeed[j];
            int random = rand() % 60 + 40;
            tArry[i].sArry->Sscore = random;
        }
    }
}

void print_info(struct teacher tArry[], int len){
    for (int i = 0; i < len; ++i) {
        cout << tArry[i].tName << endl;
        for (int j = 0; j < 5; ++j) {
            cout << i << " teacher:" << tArry->sArry->sName << "    " << tArry->sArry->Sscore << endl;
        }
    }
}

int main(){
    srand((unsigned int)time(NULL));
    struct teacher aArry[3];
    int len = sizeof (aArry) / sizeof (aArry[0]);
    allocateSpace(aArry, len);
    print_info(aArry, len);
    return 0;
}