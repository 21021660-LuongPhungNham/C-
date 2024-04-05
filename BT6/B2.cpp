bool eq(int a[], int b[], int n) {
    if(n <= 0) {
        return false;
    }

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]) {
                return false;
           }
    }
    return true;
}
