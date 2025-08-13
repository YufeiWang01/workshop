#include <iostream>

void printArray(double* arr, int n){
    if (!arr || n <= 0){
        std::cout << '\n';
        return;
    }
    for (int i = 0; i < n; ++i){
        std::cout << arr[i];
        if (i + 1 < n){
            std::cout << ' ';
        }
    }
    std::cout << '\n';
}