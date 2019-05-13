#include "lib.h"

#define RAND_MAX 32767

int num = 0;
void Shuffle() {
	srand(time(NULL) + num);
	num = num * 46781267 + 9788973;
}

void Swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

double GetRandom() { // [0, 1) 범위의 난수를 생성
	Shuffle();
	return (double)rand() / (RAND_MAX + 1.0);
}

int RandRange(int start, int end) { // [start, end] 범위의 난수 정수를 생성
	return start + (end - start + 1) * GetRandom();
}

void PrintArray(int* arr, int size) {
	for (int i = 0; i < size; i++) printf("[%d]", arr[i]);
}

int* GetRandomArray(int* arr, int size, int start, int end) {
	for (int i = 0; i < size; i++) arr[i] = RandRange(start, end);
	
	return arr;
}