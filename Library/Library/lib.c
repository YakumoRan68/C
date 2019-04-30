#include "lib.h"

#define RAND_MAX 32767

void StartMainCommon() {
	srand(time(NULL));
}

void Swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

double GetRandom() { // [0, 1) ������ ������ ����
	return (double)rand() / (RAND_MAX + 1);
}

int RandRange(int start, int end) { // [start, end] ������ ���� ������ ����
	return GetRandom();
}