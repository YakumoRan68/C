#include <stdio.h>

main() {
	int i, j;
	int a[3][5] = { {0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4} };

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) printf("a[%d][%d] = %d ", i, j, a[i][j]);
		printf("\n");
	}
}