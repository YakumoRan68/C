#include "lib.h"

int GetParent(int x) {
	return (x - 1) / 2;
}

void MakeHeap(int *data, int num) {
	for (int i = 1; i<num; i++) {
		int child = i;
		while (child > 0) {
			int root = GetParent(child);
			if (data[root] < data[child]) {
				Swap(&data[root], &data[child]);
			}
			child = root;
		}
	}
}

void Heap(int* ToSort) {
	MakeHeap(ToSort, ARRAYSIZE);

	for (int i = ARRAYSIZE - 1; i >= 0; i--) {
		Swap(&ToSort[i], &ToSort[0]);

		MakeHeap(ToSort, i);
	}
}
