#include "lib.h"

void Bubble(int* ToSort) {
	for (int i = 1; i < ARRAYSIZE; i++) {
		for (int j = 0; j < ARRAYSIZE - 1; j++)
			if (ToSort[j] > ToSort[j + 1]) {
				Swap(&ToSort[j], &ToSort[j + 1]);
#if SHOWPROCESS
				PrintArray(ToSort);
#endif
			}
	}
}