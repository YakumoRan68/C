#include "lib.h"

void Selection(int list[]) {
	int Max;
	for (int i = 0; i < ARRAYSIZE - 1; i++) {
		Max = i;
		for (int j = i + 1; j < ARRAYSIZE; j++) {
			if (list[j] > list[Max]) {
				Max = j;
			}
		}
		Swap(&list[Max], &list[i]);
	}
}