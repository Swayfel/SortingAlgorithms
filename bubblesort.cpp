#include "bubblesort.h"

int* bubbleSort(int* arr, int arraySize)
{
    auto start = std::chrono::high_resolution_clock::now();
    int* result = new int[arraySize];

    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < arraySize-1; i++) {
            if (arr[i] > arr[i + 1]) {
                int a = arr[i];
                int b = arr[i + 1];
                arr[i] = b;
                arr[i + 1] = a;
                swapped = true;
            }
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Bubblesort took " << duration.count() << " ms" << std::endl;
    result = arr;
    return result;
}
