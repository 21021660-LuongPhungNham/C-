#include<iostream>
#include<cstring>

using namespace std;

int countOccur(const char* str1, const char* str2) {
    int count = 0;
    size_t len1 = strlen(str1);
  size_t len2 = strlen(str2);

  for (int i = 0; i <= len2 - len1; i++) {
    if (strcmp(str2 + i, str1) == 0) {
      count++;
    }
  }

  return count;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    cerr << "Sai cu phap" << endl;
    return 1;
  }

  const char* str1 = argv[1];
  const char* str2 = argv[2];

  int occurrences = countOccur(str1, str2);
  cout << "so lan xuat hien cua \"" << str1 << "\" trong \"" << str2 << "\": " << occurrences << endl;

  return 0;
}

