
#include <iostream>
using namespace std;

int a1[5];

int a2[4] = {1, 2, 3, 4};

int a3[] = {1, 2, 3, 4};

int main() {
    int a4[5];

    for (int i = 0; i < sizeof(a1) / sizeof(a1[0]); i++) {
        cout << a1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < sizeof(a2) / sizeof(a2[0]); i++) {
        cout << a2[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < sizeof(a3) / sizeof(a3[0]); i++) {
        cout << a3[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < sizeof(a4) / sizeof(a4[0]); i++) {
        cout << a4[i] << " ";
    }
    cout << endl;

    return 0;
}
