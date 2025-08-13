double arrayMax(double* arr, int n){
    if (!arr || n <= 0){
        return 0;
    }
    double mx = arr[0];
    for (int i = 1; i < n; ++i){
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }
    return mx;
}