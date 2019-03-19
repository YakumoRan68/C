#include <stdio.h>
#include "lib.h"

main() {
	int* ToSort = &sample_2;
	printline("초기값 : ", ToSort);

	int Max;
	for (int i = 0; i < 9; i++) {
		Max = i;
		for (int j = i + 1; j < 10; j++) {
			if (ToSort[j] > ToSort[Max]) {
				Max = j;
			}
		}
		swap(&ToSort[Max], &ToSort[i]);
	}

	printline("\n최종값 : ", ToSort);
	getch();
}