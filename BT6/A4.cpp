#include <iostream>
#include <string>

using namespace std;

void swapByValue(int a[5]) {
  cout << "Địa chỉ a trong hàm: " << &a << endl;

  int temp = a[0];
  a[0] = a[4];
  a[4] = temp;

  cout << "Địa chỉ a sau khi hoán đổi: " << &a << endl;
}

void swapByReference(int (&a)[5]) {
  cout << "Địa chỉ a trong hàm: " << &a << endl;

  int temp = a[0];
  a[0] = a[4];
  a[4] = temp;

  cout << "Địa chỉ a sau khi hoán đổi: " << &a << endl;
}

int main() {

}
