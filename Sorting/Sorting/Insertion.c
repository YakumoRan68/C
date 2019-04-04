#include "lib.h"

void Insertion(int* ToSort) {
	bool flag = TRUE; //불필요한 추가비교를 방지하기 위함
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