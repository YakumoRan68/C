#include <stdio.h>
#define SIZE 5

int main(void) {
	int temp[9] = { 3, 2, 1, 5, 4, 7, 8, 0, 6 };
	int tempCount = 9;
	int hold = 0, loop, i;

	for (loop = 0; loop < tempCount - 1; loop++) {
		for (i = 0; i < tempCount - 1 - loop; i++) {
			if (temp[i] > temp[i + 1]) {
				hold = temp[i];
				temp[i] = temp[i + 1];
				temp[i + 1] = hold;
			}
		}
	}

	for (i = 0; i < tempCount; i++) {
		printf("%d ", temp[i]);
	}
}

