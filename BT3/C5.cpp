#include<iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    int a[] = {1, 2, 3, 4, 5};
    Point myPoint1 = {10, 20};

    cout<< a<< endl;
    cout<< &(myPoint1.x)<< endl;
    cout<< &(myPoint1.y)<< endl;

    Point myPoint2 = myPoint1;
    cout<< &(myPoint2.x)<< endl;
    cout<< &(myPoint2.y)<< endl;

    return 0;


}
