#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define bool   _Bool
#define FALSE  0
#define TRUE   1

#define ARRAYSIZE 20			//�迭�� �� ������ ����
#define STACKSIZE 50
#define MAXLEVEL 300			//Quick.c ����
#define ELEMENTS_PER_LINE 12	//�� �ٿ� ���� ������ ����

#define SHOW_PROGRESS TRUE		//����(��ȯ/����) ���� ���̱�
#define ISRANDOM TRUE			//������ ���� ������ ������ �����ϰ� ������� FALSE��

#define BENCHMARK FALSE			//���� �˰��� ��ġ��ŷ(�̱���)
#define NOLINE TRUE
#define NOARRAY TRUE

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