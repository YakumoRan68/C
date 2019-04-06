#include "lib.h"

void Insertion(int list[]) {
	bool flag = TRUE; //불필요한 추가비교를 방지하기 위함
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