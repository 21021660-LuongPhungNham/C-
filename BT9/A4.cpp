#include <iostream>
#include <cstring>

using namespace std;

// Hàm đảo xâu
char* reverse(const char a[]) {
    int len = strlen(a);
    char* result = new char[len + 1];
    for (int i = 0; i < len; ++i) {
        result[i] = a[len - i - 1];
    }
    result[len] = '\0';
    return result;
}

// Hàm xóa kí tự c
char* delete_char(const char a[], char c) {
    int len = strlen(a);
    char* result = new char[len + 1];
    int j = 0;
    for (int i = 0; i < len; ++i) {
        if (a[i] != c) {
            result[j++] = a[i];
        }
    }
    result[j] = '\0';
    return result;
}

// Hàm độn phải
char* pad_right(const char a[], int n) {
    int len = strlen(a);
    if (len >= n) {
        char* result = new char[len + 1];
        strcpy(result, a);
        return result;
    } else {
        char* result = new char[n + 1];
        strcpy(result, a);
        for (int i = len; i < n; ++i) {
            result[i] = ' ';
        }
        result[n] = '\0';
        return result;
    }
}

// Hàm độn trái
char* pad_left(const char a[], int n) {
    int len = strlen(a);
    if (len >= n) {
        char* result = new char[len + 1];
        strcpy(result, a);
        return result;
    } else {
        int numSpaces = n - len;
        char* result = new char[n + 1];
        for (int i = 0; i < numSpaces; ++i) {
            result[i] = ' ';
        }
        strcpy(result + numSpaces, a);
        result[n] = '\0';
        return result;
    }
}

// Hàm cắt xâu
char* truncate(const char a[], int n) {
    int len = strlen(a);
    if (len <= n) {
        char* result = new char[len + 1];
        strcpy(result, a);
        return result;
    } else {
        char* result = new char[n + 1];
        strncpy(result, a, n);
        result[n] = '\0';
        return result;
    }
}

// Hàm lọc trái
char* trim_left(const char a[]) {
    int len = strlen(a);
    int startIndex = 0;
    while (a[startIndex] == ' ') {
        ++startIndex;
    }
    char* result = new char[len - startIndex + 1];
    strcpy(result, a + startIndex);
    return result;
}

// Hàm lọc phải
char* trim_right(const char a[]) {
    int len = strlen(a);
    int endIndex = len - 1;
    while (a[endIndex] == ' ') {
        --endIndex;
    }
    char* result = new char[endIndex + 2];
    strncpy(result, a, endIndex + 1);
    result[endIndex + 1] = '\0';
    return result;
}

int main() {
    const char a[] = "  Hello World  ";

    // Đảo xâu
    char* reversed = reverse(a);
    cout << "1. Xau dao nguoc: " << reversed << endl;
    delete[] reversed;

    // Xóa kí tự
    char* deleted = delete_char(a, 'o');
    cout << "2. Xau sau khi xoa 'o': " << deleted << endl;
    delete[] deleted;

    //Độn phải
    char* paddedRight = pad_right(a, 20);
    cout << "3. Xau sau khi don phai: " << paddedRight << endl;
    delete[] paddedRight; // Giải phóng bộ nhớ

    //Độn trái
    char* paddedLeft = pad_left(a, 20);
    cout << "4. Xau sau khi don trai: " << paddedLeft << endl;
    delete[] paddedLeft;

    //Cắt xâu
    char* truncated = truncate(a, 10);
    cout << "5. Xau sau khi cat: " << truncated << endl;
    delete[] truncated;

    //Lọc trái
    char* trimmedLeft = trim_left(a);
    cout << "6. Xau sau khi loc trai: " << trimmedLeft << endl;
    delete[] trimmedLeft;

    //Lọc phải
    char* trimmedRight = trim_right(a);
    cout << "7. Xau sau khi loc phai: " << trimmedRight << endl;
    delete[] trimmedRight;
    return 0;
}
