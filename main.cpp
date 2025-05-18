#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include "bubblesort.h"

const int NUMBER_OF_RANDOM_NUMBERS = 10000;

void printArray(int* arr, int size);

void createFileWithIntValues(int size);

int main() {
	std::cout << "Welcome to the sorting library!" << std::endl;

	//createFileWithIntValues(NUMBER_OF_RANDOM_NUMBERS);
	int* arrayToBeSorted = new int[NUMBER_OF_RANDOM_NUMBERS]{ };
	std::ifstream myFile;
	myFile.open("toBeSorted.txt");
	std::string line;
	int lineNumber = 0;
	while (std::getline(myFile, line)){
		arrayToBeSorted[lineNumber] = std::stoi(line);
		lineNumber++;
	}
	lineNumber = 0;
	myFile.close();
	
	printArray(arrayToBeSorted, NUMBER_OF_RANDOM_NUMBERS);

	int* sortedArray = bubbleSort(arrayToBeSorted, NUMBER_OF_RANDOM_NUMBERS);
	printArray(sortedArray, NUMBER_OF_RANDOM_NUMBERS);

	delete[] arrayToBeSorted;
	return 0;
}


void printArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " | ";
	}
	std::cout << std::endl;
}

void createFileWithIntValues(int size) {
	std::ofstream myFile;
	myFile.open("toBeSorted.txt");
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(1, 100000);
	
	int randomNumber = 0;
	for (int i = 0; i < size; i++) {
		randomNumber = dist(gen);
		myFile << randomNumber << std::endl;
	}
	myFile.close();
}