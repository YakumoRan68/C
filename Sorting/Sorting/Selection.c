#include "lib.h"

void Selection(int array[]) {
	int Max;
	for (int i = 0; i < ARRAYSIZE - 1; i++) {
		Max = i;
		for (int j = i + 1; j < ARRAYSIZE; j++) {
			if (array[j] < array[Max]) {
				Max = j;
			}
		}
		Swap(&array[Max], &array[i]);
	}
}