#include<iostream>
#include<cstring>

using namespace std;

int main() {
    const int n = 10;
    char str[n];

    cout<< "nhap chuoi <= 10: "<<":";
    cin.getline(str, n);

    cout<< "chuoi sau khi nhap: _"<< str<< "_\n";
    return 0;
}
