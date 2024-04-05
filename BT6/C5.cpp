#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(int n) {

    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout<< "Nhap n:";
    cin>> n;

    cout<< "Cac so nguyen to nho hon " << n<< "la: ";
    for(int i = 2; i< n; i++){
        if(isPrime(i)) {
            cout<< i<< " ";
        }
    }
    return 0;
}
