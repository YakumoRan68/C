#include <stdio.h>
#include "lib.h"

void Merge(int A[], int p, int q, int r) {
	int i = p, j = q + 1, t = 1;
	int temp[10];

	while (i <= q && j <= r) {
		if (A[i] <= A[j])
			temp[t++] = A[i++];
		else
			temp[t++] = A[j++];
	}

	while (i <= q) 
		temp[t++] = A[i++];

	while (j <= r) 
		temp[t++] = A[j++];
	
	i = p; t = 1;
	while (i <= r)
		A[i++] = temp[i++];
	
}

void MergeSort(int A[], int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		MergeSort(A, p, q);
		MergeSort(A, q + 1, r);
		Merge(A, p, q, r);
	}
}

main() {
	int* ToSort = GetRandomArray(10);
	printline("ToSort : ", ToSort);
	
	MergeSort(ToSort, 0, 9);

	printline("\nSorted : ", ToSort);
	EndMain();
}