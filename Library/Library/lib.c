#include "lib.h"

#define RAND_MAX 32767

int num = 0;
void Shuffle() {
	srand(time(NULL) * 46781267 + 9788973 + ++num);
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