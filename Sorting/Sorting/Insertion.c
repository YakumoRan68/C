#include <stdio.h>
#include "lib.h"

main() {
	int* ToSort = &sample_2;
	printline("ToSort : ", ToSort);

	bool flag = TRUE;
	for (int i = 1; i < 10; i++) 
		for (int j = i; j > 0; j--) {
			flag = TRUE;
			if (ToSort[j - 1] > ToSort[j]) {
				swap(&ToSort[j - 1], &ToSort[j]);
				flag = FALSE;
			}
			if (flag) break;
		}

	printline("\nSorted : ", ToSort);
	getch();
}