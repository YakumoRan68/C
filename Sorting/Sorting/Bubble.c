#include <stdio.h>
#include "lib.h"

main() {
	int* ToSort = &sample_2;
	printline("�ʱⰪ : ", ToSort);

	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 10 - 1; j++)
			if (ToSort[j] > ToSort[j + 1])
				swap(&ToSort[j], &ToSort[j + 1]);
		printarr(ToSort);
		printf("\n");
	}

	printline("\n������ : ", ToSort);
	getch();
}

