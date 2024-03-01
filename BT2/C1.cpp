#include<iostream>
#include<math.h>

using namespace std;

bool IsPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
             return false;
        }

    }
    return true;
}

int main(){
int N;
cin >>N;

    if(IsPrime(N)) {
        cout<< "true";
    }
    else cout<< "false";

return 0;
}
