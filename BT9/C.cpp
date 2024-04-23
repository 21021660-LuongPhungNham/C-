#include <iostream>
#include <cstring>

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
char* delete(const char a[], char c) {
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
char* donphai(const char a[], int n) {
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
char* dontrai(const char a[], int n) {
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
char* catxau(const char a[], int n) {
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
char* loctrai(const char a[]) {
    int len = strlen(a);
    int startIndex = 0;
    while (a[startIndex] == ' ') {
        ++startIndex; =
    }
    char* result = new char[len - startIndex + 1]; =
    strcpy(result, a + startIndex);
    return result;
}

// Hàm lọc phải
char* locphai(const char a[]) {
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

     //Đảo xâu
    char* reversed = reverse(a);
    cout<< reversed << endl;
    delete[] reversed;

    //Xóa kí tự
    char* deleted = delete(a, 'o');
    cout << deleted << endl;
    delete[] deleted;

    //Độn phải
    char* Donphai = donphai(a, 20);
    cout<< Donphai << endl;
    delete[] Donphai;

    //Độn trái
    char* Dontrai = dontrai(a, 20);
    cout<< Dontrai << endl;
    delete[] Dontrai;

    //Cắt xâu
    char* Catxau = catxau(a, 10);
    cout<< Catxau<< endl;
    delete[] Catxau;

    //Lọc trái
    char* Loctrai = loctrai(a);
    cout<< Loctrai << endl;
    delete[] Loctrai;

    //Lọc phải
    char* Locphai = locphai(a);
    cout<< Locphai << endl;
    delete[] ;
    return 0;
}

