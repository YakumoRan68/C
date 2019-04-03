#include "lib.h"

void Selection(int* ToSort) {
	int Max;
	for (int i = 0; i < ARRAYSIZE - 1; i++) {
		Max = i;
		for (int j = i + 1; j < ARRAYSIZE; j++) {
			if (ToSort[j] > ToSort[Max]) {
				Max = j;
			}
		}
		Swap(&ToSort[Max], &ToSort[i]);
	}
}