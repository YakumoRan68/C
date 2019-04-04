#include "lib.h"

int* array;
int count = 0;

int sample_1[ARRAYSIZE] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
int sample_2[ARRAYSIZE] = { 2, 4, 6, 8, 10, 9, 7 ,5, 3, 1 };
int sample_3[ARRAYSIZE] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
int sample_4[ARRAYSIZE] = { 9, 7, 5, 3, 1, 10, 8, 6, 4, 2 };

static int RandomSeed = 0;
int* GenerateArray(int size) {
	//Variable reference made by automatic storage duration will become invalid once it leaves its declaring scope, i.e., when the function returns.
	//Need to dynamically allocate the memory inside of the function or fill a preallocated buffer provided by the caller.
	//https://stackoverflow.com/questions/11656532/returning-an-array-using-c
	//http://iso-9899.info/wiki/Storage_Duration
	array = malloc(sizeof(int) * size); //대충 요약하면; 다른 파일에서도 배열의 참조를 살리려면 동적으로 배열하는게 편해서 사용.
#if ISRANDOM
	RandomSeed = RandomSeed + time(NULL);
	srand(RandomSeed);
#endif

	for (int i = 0; i < size; i++) array[i] = rand();

	return array;
}

void Swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	count++;
}

void PrintArrayInternal(int a[], bool IsHeap) {
	printf("  ");
	for (int i = 0; i < ARRAYSIZE + IsHeap; i++) {
		printf("%5d ", a[i]); //0 ~ 32767
		if (!((i + 1) % ELEMENTSPERLINE)) printf("\n  ");
	}
	printf("\n\n");
}

void PrintArray(int SRC[]) {
	PrintArrayInternal(SRC, FALSE);
}

void PrintHeap(int SRC[]) {
	PrintArrayInternal(SRC, TRUE);
}

void PrintLine() {
	printf("==========================================================================\n\n");
}

void ShowState() {
	printf("총 교환/분할 횟수 : %d\n소요 시간 : %dms\n\n", count, clock()); //일단은 SHOWPROCESS를 꺼야 순수 연산시간에 대한 신뢰도가 높음. (벤치마킹 추가하면 제대로 출력될듯)
}

void PrintLineWithName(char *str) {
	printf("===============================%s===============================\n\n", str);
}