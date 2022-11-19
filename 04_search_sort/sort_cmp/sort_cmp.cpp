#include <iostream>
#include <chrono>
#include "functions.h"

int main() {
    int n;
    for (int i = 1; i < 5; ++i) {
        n = expon(10, i);
        int* arr1 = new int[n];
        int* arr2 = new int[n];
        fill_array_random(arr1, n, 0, n);
        fill_array_random(arr2, n, 0, n);

        auto t1 = std::chrono::high_resolution_clock::now();
        selection_sort(arr1, n);
        auto t2 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> select = t2 - t1;

        t1 = std::chrono::high_resolution_clock::now();
        quick_sort(arr2, 0, n - 1);
        t2 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> quick = t2 - t1;

        delete arr1;
        delete arr2;
        std::cout << "1e+0" << i << ": " << select.count() << " (ss), " << quick.count() << " (qs)" << std::endl;
    }
    return 0;
}