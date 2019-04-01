#include "lib.h"

main() {
	int* ToSort = GenerateRandomArray(ARRAYSIZE);
	PrintLine("ToSort", ToSort);

	for (int i = 1; i < ARRAYSIZE; i++) {
		for (int j = 0; j < ARRAYSIZE - 1; j++)
			if (ToSort[j] > ToSort[j + 1])
				Swap(&ToSort[j], &ToSort[j + 1]);
		PrintArray(ToSort);
		printf("\n");
	}

	PrintLine("\nSorted", ToSort);
	EndMain();
}

