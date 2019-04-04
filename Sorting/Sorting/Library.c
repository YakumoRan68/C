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
	array = malloc(sizeof(int) * size); //���� ����ϸ�; �ٸ� ���Ͽ����� �迭�� ������ �츮���� �������� �迭�ϴ°� ���ؼ� ���.
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
	printf("�� ��ȯ/���� Ƚ�� : %d\n�� �ҿ� �ð� : %dms\n\n", count, clock()); //�ϴ��� SHOWPROCESS�� ���� ���� ����ð��� ���� �ŷڵ��� ����. (��ġ��ŷ �߰��ϸ� ����� ��µɵ�)
}

void PrintLineWithName(char *str) {
	printf("===============================%s===============================\n\n", str);
}