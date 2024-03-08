#include <iostream>
using namespace std;

struct Point {
    float x;
    float y;
};

Point mid_point(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2.0f;
    mid.y = (p1.y + p2.y) / 2.0f;
    return mid;
}

int main() {

    Point point1 = {1.0f, 2.0f};
    Point point2 = {4.0f, 6.0f};

    Point midpoint = mid_point(point1, point2);

    cout<< midpoint.x << ", " << midpoint.y<<endl;

    return 0;
}
