#include <iostream>

using namespace std;

void swapByValue(int a, int b) {
  // In địa chỉ của a và b trong hàm
  cout << "Địa chỉ a trong hàm: " << &a << endl;
  cout << "Địa chỉ b trong hàm: " << &b << endl;

  // Hoán đổi giá trị của a và b trong hàm
  int temp = a;
  a = b;
  b = temp;

  // In địa chỉ của a và b sau khi hoán đổi trong hàm
  cout << "Địa chỉ a sau khi hoán đổi: " << &a << endl;
  cout << "Địa chỉ b sau khi hoán đổi: " << &b << endl;
}

void swapByReference(int &a, int &b) {
  // In địa chỉ của a và b trong hàm
  cout << "Địa chỉ a trong hàm: " << &a << endl;
  cout << "Địa chỉ b trong hàm: " << &b << endl;

  // Hoán đổi giá trị của a và b trong hàm
  int temp = a;
  a = b;
  b = temp;

  // In địa chỉ của a và b sau khi hoán đổi trong hàm
  cout << "Địa chỉ a sau khi hoán đổi: " << &a << endl;
  cout << "Địa chỉ b sau khi hoán đổi: " << &b << endl;
}

int main() {
  int x = 5;
  int y = 10;

  // Truyền tham số bằng giá trị
  swapByValue(x, y);

  // In địa chỉ của x và y sau khi gọi swapByValue
  cout << "Địa chỉ x sau khi swapByValue: " << &x << endl;
  cout << "Địa chỉ y sau khi swapByValue: " << &y << endl;

  // Truyền tham số bằng tham chiếu
  swapByReference(x, y);

  // In địa chỉ của x và y sau khi gọi swapByReference
  cout << "Địa chỉ x sau khi swapByReference: " << &x << endl;
  cout << "Địa chỉ y sau khi swapByReference: " << &y << endl;

  return 0;
}
