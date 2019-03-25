#pragma once
#include <stdlib.h>
#include <time.h>

#define bool   _Bool
#define FALSE  0
#define TRUE   1

int* array;
int sample_1[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
int sample_2[10] = { 2, 4, 6, 8, 10, 9, 7 ,5, 3, 1 };
int sample_3[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
int sample_4[10] = { 9, 7, 5, 3, 1, 10, 8, 6, 4, 2 };

void Swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void PrintArray(int a[]) {
	for (int i = 0; i < 10; i++) printf("%d ", a[i]);
}

void printline(char *str, int SRC[]) {
	printf("%s", str);
	PrintArray(SRC);
	printf("\n\n");
}

int* GetRandomArray(int size) {
	array = malloc(sizeof(int) * size);
	//Variable reference made by automatic storage(array[]) duration will become invalid once it leaves its declaring scope, i.e., when the function returns.
	//Need to dynamically allocate the memory inside of the function or fill a preallocated buffer provided by the caller.
	//https://stackoverflow.com/questions/11656532/returning-an-array-using-c
	srand((unsigned)time(NULL));
	
	for (int i = 0; i < size; i++) array[i] = rand();

	return array;
}

void EndMain() {
	free(array);
	getch();
}