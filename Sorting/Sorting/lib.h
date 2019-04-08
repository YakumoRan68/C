#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define bool   _Bool
#define FALSE  0
#define TRUE   1

#define ARRAYSIZE 20			//배열에 들어갈 원소의 갯수
#define STACKSIZE 50
#define MAXLEVEL 300			//Quick.c 참고
#define ELEMENTS_PER_LINE 12	//한 줄에 보일 원소의 갯수

#define SHOW_PROGRESS TRUE		//연산(교환/분할) 과정 보이기
#define ISRANDOM TRUE			//원소의 값을 고정된 값으로 실험하고 싶은경우 FALSE로

#define BENCHMARK FALSE			//정렬 알고리즘 벤치마킹(미구현)
#define NOLINE FALSE
#define NOARRAY FALSE

extern int count;
extern int* array;
extern int sample_1[ARRAYSIZE], sample_2[ARRAYSIZE], sample_3[ARRAYSIZE], sample_4[ARRAYSIZE];
extern int* GenerateArray(int size);
extern void Swap(int *a, int *b);
extern void PrintArray(int a[]);
extern void PrintHeap(int a[]);
extern void PrintLine();
extern void PrintLineWithName(char *str);
extern void ShowState();
extern void Bubble(int arr[]);
extern void Heap(int* arr);
extern void Insertion(int arr[]);
extern void Merge(int* arr);
extern void Quick(int* arr);
extern void Selection(int arr[]);
extern void Test();