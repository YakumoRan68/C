#include "lib.h"

int GetParent(int x) {
	return (x - 1) / 2;
}

void heap(int *data, int num) {
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

main() {
	int* ToSort = GenerateRandomArray(ARRAYSIZE);
	PrintArray(ToSort);
	heap(ToSort, ARRAYSIZE); // 힙을 만든다. 

	for (int i = ARRAYSIZE - 1; i >= 0; i--) {
		// 가장큰 숫자(root)를 맨 마지막 원소와 스왑 
		Swap(&ToSort[i], &ToSort[0]);

		// 맨마지막원소(가장큰원소)를 제외하고 다시 힙을 만든다. 
		heap(ToSort, i);
	}

	PrintArray(ToSort);
	EndMain();
}
