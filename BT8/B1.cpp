#include<iostream>
using namespace std;

struct Point {
    int x, y, w, h;

    Point(int _x, int _y) {
        x = _x;
        y = _y;
        }
    };

struct Rect {
    int x, y, w, h;

    Rect(int _x, int _y, int _w, int _h) {
         x = _x;
         y = _y;
         w = _w;
         h = _h;
        }

        bool contains(const Point& p) const {
            return (p.x >= x && p.x <= x + w && p.y >= y && p.y <= y + h);
    }

    };

    int main() {
        Rect rect(2, 2, 5, 3);

         Point p1(3, 3);
         Point p2(6, 4);

         cout << boolalpha << rect.contains(p1) << endl;
         cout << boolalpha << rect.contains(p2) << endl;

         return 0;
    }
