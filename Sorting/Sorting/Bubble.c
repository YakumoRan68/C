#include <stdio.h>
#include "lib.h"

main() {
	int* ToSort = GetRandomArray(10);
	printline("ToSort : ", ToSort);

	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 10 - 1; j++)
			if (ToSort[j] > ToSort[j + 1])
				Swap(&ToSort[j], &ToSort[j + 1]);
		PrintArray(ToSort);
		printf("\n");
	}

	printline("\nSorted : ", ToSort);
	EndMain();
}

