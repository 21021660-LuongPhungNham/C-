#include<iostream>
using namespace std;

bool Timlap(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(a[i] == a[i+1]) {
            return true;
        }
    }
    return false;
}

int main() {
    const int MAX_N = 10000;
    int n;
    int a[MAX_N];

    cout << "Nhap so nguyen duong N (1 <= N <= 10000): ";
    cin >> n;

    if (n < 1 || n > MAX_N) {
        cout << "N phai nam trong khoang tu 1 den 10000";
        return 1;
    }

    cout << "Nhap " << n << " so: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (Timlap(a, n)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
