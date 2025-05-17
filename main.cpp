#include <iostream>
#include "bubblesort.h"

void printArray(int* arr, int size);

int main() {
	std::cout << "Welcome to the sorting library!" << std::endl;
	int sizeOfArray = 16;
	int* arrayToBeSorted = new int[sizeOfArray]{ 28, 19, 2, 13, 10, 244, 219, 172, 290, 192, 20, 78, 29, 50, 68, 39 };
	printArray(arrayToBeSorted, sizeOfArray);

	int* sortedArray = bubbleSort(arrayToBeSorted, sizeOfArray);
	printArray(sortedArray, sizeOfArray);

	delete[] arrayToBeSorted;
	return 0;
}


void printArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " | ";
	}
	std::cout << std::endl;
}