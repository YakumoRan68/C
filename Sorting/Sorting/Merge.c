#include "lib.h"

int MEMORY[ARRAYSIZE]; //O(n) 만큼의 추가 공간이 필요하다

void MergeArray(int list[], int left, int mid, int right) {
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

#if SHOWPROCESS
	PrintArray(list);
	PrintArray(MEMORY);
#endif
	count++;
}

void MergeSort(int list[], int left, int right) { //재귀문 사용
	int mid;

	if (left<right) {
		mid = (left + right) / 2;
		MergeSort(list, left, mid);
		MergeSort(list, mid + 1, right);
		MergeArray(list, left, mid, right);
	}
}

void mergesort(int list[]) { //반복문 사용(Bottom-Up 알고리즘)
	int i, j, l1, l2, h1, h2, k;

	for (int size = 1; size < ARRAYSIZE; size = size * 2) {
		l1 = 0;
		k = 0;
		while (l1 + size < ARRAYSIZE) {
			h1 = l1 + size - 1;
			l2 = h1 + 1;
			h2 = l2 + size - 1;
			
			if (h2 >= ARRAYSIZE)
				h2 = ARRAYSIZE - 1;

			i = l1;
			j = l2;

			while (i <= h1 && j <= h2) {
				if (list[i] <= list[j])
					MEMORY[k++] = list[i++];
				else
					MEMORY[k++] = list[j++];
			}

			while (i <= h1)
				MEMORY[k++] = list[i++];
			while (j <= h2)
				MEMORY[k++] = list[j++];

			l1 = h2 + 1;

#if SHOWPROCESS
			PrintArray(list);
			PrintArray(MEMORY);
#endif
			count++;
		}

		for (int i = l1; k < ARRAYSIZE; i++)
			MEMORY[k++] = list[i];

		for (int i = 0; i < ARRAYSIZE; i++)
			list[i] = MEMORY[i];
	}
}

void Merge(int* ToSort) {
	MergeSort(ToSort, 0, ARRAYSIZE - 1);
	//mergesort(ToSort);
}