#include<iostream>

using namespace std;

int main() {
char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a';
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;

delete[] a;
cerr << "a after deleting a:" << "-" << a << "-" << endl;
}

/* Dòng delete c; ở cuối, vì đó là lệnh gây ra lỗi.
Đoạn code sẽ có hành vi không xác định vì c trỏ đến
 một phần của mảng được cấp phát động a, không phải
  là toàn bộ mảng.
