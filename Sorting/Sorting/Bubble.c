#include <stdio.h>
#include "lib.h"

#define ARRAYNAME &sample_2

main() {
	int* ToSort = ARRAYNAME; 
	
	printf("초기값 : ");
	for (int i = 0; i < 10; i++) printf("%d ", ToSort[i]);
	printf("\n\n");

	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 10 - 1; j++)
			if (ToSort[j] > ToSort[j + 1])
				swap(&ToSort[j], &ToSort[j + 1]);
		for (int x = 0; x < 10; x++) printf("%d ", ToSort[x]);
		printf("\n");
	}

	printf("\n최종값 : ");
	for (int i = 0; i < 10; i++) printf("%d ", ToSort[i]);
	getch();
}