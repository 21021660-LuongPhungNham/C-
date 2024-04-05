#include<iostream>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}


bool nguyentocungnha(int a, int b) {
  return gcd(a, b) == 1;
}

int main() {
  int a, b;
  cout << "Nhap a: ";
  cin >> a;
  cout << "Nhap b: ";
  cin >> b;

  if (nguyentocungnha(a, b)) {
    cout << a << " va " << b << " la nguyen to cung nhau" << endl;
  } else {
    cout << a << " va " << b << " khong la nguyen to cung nhau" << endl;
  }

  return 0;
}
