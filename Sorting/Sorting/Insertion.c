#include "lib.h"

void Insertion(int list[]) {
	bool flag = TRUE; //���ʿ��� �߰��񱳸� �����ϱ� ����
	for (int i = 1; i < ARRAYSIZE; i++) {
		flag = TRUE;
		for (int j = i; j > 0; j--) {
			if (list[j - 1] > list[j]) {
				Swap(&list[j - 1], &list[j]);
				flag = FALSE;
			}
			if (flag) break;
		}
	}
}