#include "lib.h"

int Partition(int left, int right) {
	int pivot = array[left];
	int low = left - 1;
	int high = right + 1;

	while (1) {
		while (array[++low] < pivot);
		while (array[--high] > pivot);

		if (low >= high) break;

		Swap(&array[low], &array[high]);
	}

	return high;
}

void Sort(int left, int right) {
	if (left >= right) return;
	int q = Partition(left, right);

	Sort(left, q);
	Sort(q + 1, right);
}