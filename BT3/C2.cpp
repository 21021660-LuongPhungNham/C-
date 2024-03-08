#include<iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void Value(Point p) {
    cout<< &p<<endl;
}

void Reference(Point& p) {
    cout<< &p<< endl;
}

int main() {
    Point myPoint = {3, 5};

    cout<< &myPoint<< endl;

    Value(myPoint);
    Reference(myPoint);

    return 0;
}
