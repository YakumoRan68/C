#include "lib.h"

#define RAND_MAX 32767

void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int num = 0;
void Shuffle() {
	srand(time(NULL) + num);
	num = num * 14239102 + 23058298;
}

double GetRandom() { // [0, 1) ������ ������ ����
	Shuffle();
	return (double)rand() / (RAND_MAX + 1.0);
}

int RandRange(int start, int end) { // [start, end] ������ ���� ������ ����
	return start + (end - start + 1) * GetRandom();
}

void PrintArray(int* arr, int size) {
	for (int i = 0; i < size; i++) printf("[%d]", arr[i]);
}

int* GetRandomArray(int* arr, int size, int start, int end) {
	for (int i = 0; i < size; i++) arr[i] = RandRange(start, end);
	
	return arr;
}