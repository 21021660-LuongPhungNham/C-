#include <iostream>
#include<cstring>

using namespace std;

void reverse(char* s);

int main() {
  char s[] = "abc";
  cout << "Xau ban dau " << s << endl;

  reverse(s);
  cout << "Xau sau khi dao: " << s << endl;

  return 0;
}

void reverse(char* s) {
  int len = strlen(s);
  for (int i = 0; i < len / 2; i++) {
    char tmp = s[i];
    s[i] = s[len - i - 1];
    s[len - i - 1] = tmp;
  }
}

