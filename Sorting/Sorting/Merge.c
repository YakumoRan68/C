#include "lib.h"

int MEMORY[ARRAYSIZE];

void Merge(int list[], int left, int mid, int right) {
	int i = left , j = mid + 1, k = left, l;

	while (i <= mid && j <= right) {
		if (list[i] <= list[j])
			MEMORY[k++] = list[i++];
		else
			MEMORY[k++] = list[j++];
	}

	if (i > mid) {
		for (l = j; l <= right; l++)
			MEMORY[k++] = list[l];
	} else {
		for (l = i; l <= mid; l++)
			MEMORY[k++] = list[l];
	}

	for (l = left; l <= right; l++) {
		list[l] = MEMORY[l];
	}

	PrintArray(list);
	PrintArray(MEMORY);
}

void MergeSort(int list[], int left, int right) {
	int mid;

	if (left<right) {
		mid = (left + right) / 2;
		MergeSort(list, left, mid);
		MergeSort(list, mid + 1, right);
		Merge(list, left, mid, right);
	}
}

main() {
	int* ToSort = GenerateRandomArray(ARRAYSIZE);
	PrintLine("ToSort", ToSort);
	
	MergeSort(ToSort, 0, ARRAYSIZE - 1);

	PrintLine("Sorted", ToSort);
	EndMain();
}