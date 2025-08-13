double* dynamicArray(int N, double M){
    if (N <= 0) {
        return nullptr;
    }
    double* arr = new double[N];
    for (int i = 0; i < N; ++i){
        arr[i] = M;
    }
    return arr;
}