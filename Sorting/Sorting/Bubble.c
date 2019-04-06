#include "lib.h"

void Bubble(int array[]) {
	for (int i = 1; i < ARRAYSIZE; i++) {
		for (int j = 0; j < ARRAYSIZE - 1; j++)
			if (array[j] > array[j + 1]) {
				Swap(&array[j], &array[j + 1]);
			}
	}
}