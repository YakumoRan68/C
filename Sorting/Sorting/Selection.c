#include <stdio.h>
#include "lib.h"

main() {
	int* ToSort = GetRandomArray(10);
	printline("ToSort : ", ToSort);

	int Max;
	for (int i = 0; i < 9; i++) {
		Max = i;
		for (int j = i + 1; j < 10; j++) {
			if (ToSort[j] > ToSort[Max]) {
				Max = j;
			}
		}
		Swap(&ToSort[Max], &ToSort[i]);
	}

	printline("\nSorted : ", ToSort);
	EndMain();
}