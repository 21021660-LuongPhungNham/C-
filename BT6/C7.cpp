#include <iostream>

using namespace std;

void line(int m, int n) {
  for (int i = 0; i < m; i++) {
    cout << " ";
  }
  for (int i = 0; i < n; i++) {
    cout << "*";
  }
  cout << endl;
}

int main() {
  int numRows;
  cout << "Nhap so dong can in: ";
  cin >> numRows;

  for (int i = 1; i <= numRows; i++) {
    line(numRows - i, i);
  }

  return 0;
}
