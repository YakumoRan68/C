#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAYSIZE 10
#define bool   _Bool
#define FALSE  0
#define TRUE   1

extern int* array;
extern int sample_1[ARRAYSIZE], sample_2[ARRAYSIZE], sample_3[ARRAYSIZE], sample_4[ARRAYSIZE];
extern int* GenerateRandomArray(int size);
extern void Swap(int *a, int *b);
extern void PrintArray(int a[]);
extern void PrintHeap(int a[]);
extern void PrintLine(char *str, int SRC[]);
extern void ShowElapsed();
extern void Bubble(int* arr);