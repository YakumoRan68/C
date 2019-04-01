#include "lib.h"

main() {
	int* ToSort = GenerateRandomArray(ARRAYSIZE);
	PrintLine("ToSort", ToSort);

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

	PrintLine("\nSorted", ToSort);
	EndMain();
}