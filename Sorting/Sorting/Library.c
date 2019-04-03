#include "lib.h"

int* array;

int sample_1[ARRAYSIZE] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
int sample_2[ARRAYSIZE] = { 2, 4, 6, 8, 10, 9, 7 ,5, 3, 1 };
int sample_3[ARRAYSIZE] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
int sample_4[ARRAYSIZE] = { 9, 7, 5, 3, 1, 10, 8, 6, 4, 2 };

static int SeedCount = 0;
int* GenerateRandomArray(int size) {
	array = malloc(sizeof(int) * size);
	//Variable reference made by automatic storage duration will become invalid once it leaves its declaring scope, i.e., when the function returns.
	//Need to dynamically allocate the memory inside of the function or fill a preallocated buffer provided by the caller.
	//https://stackoverflow.com/questions/11656532/returning-an-array-using-c
	//http://iso-9899.info/wiki/Storage_Duration
	srand(clock() + SeedCount++);

	for (int i = 0; i < size; i++) array[i] = rand();

	return array;
}

void Swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void PrintArray(int a[]) {
	for (int i = 0; i < ARRAYSIZE; i++) printf("%5d ", a[i]);
	printf("\n");
}

void PrintHeap(int a[]) {
	for (int i = 0; i < ARRAYSIZE + 1; i++) printf("%5d ", a[i]);
	printf("\n");
}

void PrintLine(char *str, int SRC[]) {
	printf("\n============================== %s ==============================\n\n", str);
	PrintArray(SRC);
}

void ShowElapsed() { //error range < 1ms
	printf("Elapsed Time : %dms\n", clock());
}