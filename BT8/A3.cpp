#include <iostream>

using namespace std;

struct Point {
    int x, y;

    Point(int _x, int _y) : x(_x), y(_y) {}
};

Point mid_point(const Point& p1, const Point& p2) {
    int mid_x = (p1.x + p2.x) / 2;
    int mid_y = (p1.y + p2.y) / 2;

    return Point(mid_x, mid_y);
}

int main() {
    Point p1(1, 3);
    Point p2(7, 9);

    Point mid = mid_point(p1, p2);

    cout<< "("<< mid.x << ", " << mid.y << ")" << endl;

    return 0;
}

