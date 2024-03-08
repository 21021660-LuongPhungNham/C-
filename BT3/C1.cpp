#include<iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void print(Point& p) {
    cout<< "(" << p.x<< ", "<< p.y<< ")\n";
}

int main() {
    Point Demo = {3, 5};

    print(Demo);
    return 0;
}
