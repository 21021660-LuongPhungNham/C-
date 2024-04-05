#include<iostream>
using namespace std;

int factorial(int x) {
    //gia tri va dia chi cua tham so
    cout<< "x = "<< x<< "at"<< &x<< endl;

    if(x == 0) {
        return 1;
    }
    else {
        return x * factorial(x - 1);
    }
}

int main() {
    int n;
    cout<< "Nhap n:";
    cin>> n;

    int result = factorial(n);
    cout<< result<< endl;
    return 0;
}
//Địa chỉ của x thay đổi sau mỗi lần gọi
//Call Stack được tạo thành từ các frame của mỗi lần gọi hàm, được lưu trữ liên tục trong bộ nhớ.

//Kích thước Stack Frame:
//Kích thước x (kiểu int) là 4 byte.
//Con trỏ &x là 8 byte trên hầu hết các kiến trúc.
//Uớc tính kích thước Stack Frame cho factorial khoảng 12 - 20 byte.

