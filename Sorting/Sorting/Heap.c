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
	heap(ToSort, ARRAYSIZE); // ���� �����. 

	for (int i = ARRAYSIZE - 1; i >= 0; i--) {
		// ����ū ����(root)�� �� ������ ���ҿ� ���� 
		Swap(&ToSort[i], &ToSort[0]);

		// �Ǹ���������(����ū����)�� �����ϰ� �ٽ� ���� �����. 
		heap(ToSort, i);
	}

	PrintArray(ToSort);
	EndMain();
}
