#include "lib.h"

void Insertion(int array[]) {
	bool flag = TRUE; //���ʿ��� �߰��񱳸� �����ϱ� ����
	for (int i = 1; i < ARRAYSIZE; i++) {
		flag = TRUE;
		for (int j = i; j > 0; j--) {
			if (array[j - 1] > array[j]) {
				Swap(&array[j - 1], &array[j]);
				flag = FALSE;
			}
			if (flag) break;
		}
	}
}