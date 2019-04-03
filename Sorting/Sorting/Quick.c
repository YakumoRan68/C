#include "lib.h"

int Partition(int list[], int left, int right) {
	int pivot = list[left], low = left, high = right + 1;

	do {
		do low++;
		while (low <= right && list[low] < pivot);
		do high--;
		while (high >= left && list[high] > pivot);

		if (low<high) 
			Swap(&list[low], &list[high]);
		
	} while (low<high);

	Swap(&list[left], &list[high]);

	return high;
}

int STACK[STACKSIZE];
void quicksort(int *array, int left, int right) { //반복문 사용
	int i = 0;

	STACK[i++] = left;
	STACK[i++] = right;

	while (i > 0) {
		right = STACK[--i];
		left = STACK[--i];

		if (left < right) {
			int index = Partition(array, left, right);
			STACK[i++] = left;
			STACK[i++] = index - 1;
			STACK[i++] = index + 1;
			STACK[i++] = right;
		}
	}
}

void QuickSort(int list[], int left, int right) { //재귀문 사용
	if (left < right) {
		int q = Partition(list, left, right);

		QuickSort(list, left, q - 1);
		QuickSort(list, q + 1, right);
	}
}

void Quick(int* ToSort) {
	//QuickSort(ToSort, 0, ARRAYSIZE - 1);
	quicksort(ToSort, 0, ARRAYSIZE - 1);
}