#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int num) {
   if (num < 0) {
        num = -num;
    }

    string s = to_string(num);
    int len = s.length();
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Nhap vao mot so nguyen: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << "True";
    }
    else {
        cout << "No";
    }

    return 0;
}
