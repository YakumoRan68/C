#include "lib.h"

void Insertion(int* ToSort) {
	bool flag = TRUE; //���ʿ��� �߰��񱳸� �����ϱ� ����
	for (int i = 1; i < ARRAYSIZE; i++) {
		flag = TRUE;
		for (int j = i; j > 0; j--) {
			if (ToSort[j - 1] > ToSort[j]) {
				Swap(&ToSort[j - 1], &ToSort[j]);
				flag = FALSE;
#if SHOWPROCESS
				PrintArray(ToSort);
#endif
			}
			if (flag) break;
		}
	}
}