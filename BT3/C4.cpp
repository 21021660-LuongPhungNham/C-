#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point myPoint = {10, 20};

    cout<< &(myPoint.x) << endl;
    cout<< &(myPoint.y) << endl;

    cout<< &myPoint << endl;

    return 0;
}
