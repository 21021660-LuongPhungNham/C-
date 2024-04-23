#include<iostream>
using namespace std;

char a[5];
char var1, var2;

int main() {

for(int i = 0; i < 5; i++) {
    a[i] = 'A' + i;
}

var1 = 'V';
var2 = 'W';


cout << a[-1]<< endl;
cout << a[5]<< endl;
cout << var1<< endl;
cout << var2<< endl;

//tran mang nhieu chieu
int a1[3][4];

//ghi tran dong dau tien cua mang
 for (int j = 0; j < 6; ++j) {
        a1[0][j] = j;
    }

    //in mang hai chieu
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 6; ++j) {
          cout << a1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



