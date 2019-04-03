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

void QuickSort(int list[], int left, int right) {
	if (left < right) {
		int q = Partition(list, left, right);

		QuickSort(list, left, q - 1);
		QuickSort(list, q + 1, right);
	}
}

void Quick(int* ToSort) {
	QuickSort(ToSort, 0, ARRAYSIZE - 1);
}