#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

void printByValue(Point p) {
    cout << p.x<< " "<< p.y << endl;
    p.x = 100;
}

void printByReference(Point &p) {
    cout<< p.x<< " "<< p.y<< endl;
    p.x = 100;
}

int main() {
    Point point;
    point.x = 10;
    point.y = 12;

    cout << "Truoc khi goi: (" << point.x << ", " << point.y << ")" << endl;

    printByValue(point);
    cout << "Sau khi goi: (" << point.x << ", " << point.y << ")" << endl;

    printByReference(point);
    cout << "sau khi gọi printByReference: (" << point.x << ", " << point.y << ")" << endl;

    return 0;
}

