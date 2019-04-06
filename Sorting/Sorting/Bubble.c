#include "lib.h"

void Bubble(int list[]) {
	for (int i = 1; i < ARRAYSIZE; i++) {
		for (int j = 0; j < ARRAYSIZE - 1; j++)
			if (list[j] > list[j + 1]) {
				Swap(&list[j], &list[j + 1]);
			}
	}
}