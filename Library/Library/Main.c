#include "lib.h"

#define ARRAYSIZE 15

void main() {
	int *arr = (int *)malloc(sizeof(int) * ARRAYSIZE);
	GetRandomArray(arr, ARRAYSIZE, 0, 100);

	PrintArray(arr, ARRAYSIZE);
}
