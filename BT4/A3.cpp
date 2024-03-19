#include<iostream>
using namespace std;

void printArray(int a[2][12], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout<< a[i][j]<< " ";
        }
    }
}

int main() {
    //in mang thanh bang 2 dong 12 cot
    int daytab1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    printArray(daytab1,2, 12);
    cout<< endl;

    //chi khoi tao mot phan cua mang bang cach xoa bot cac gia tri kho tao
    int daytab2[2][12] = {
        {31,28,31,30,31,30,31},
        {31,29,31,30,31,30,31}
    };

    printArray(daytab2, 2, 12);
    cout<< endl;

    //bo gia tri kịch thuoc
    int daytab3[2][12];
    printArray(daytab1, 2, 12);
    cout<< endl;

     return 0;

}

