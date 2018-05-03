#include <stdio.h>
#define SIZE 5

void main() {
	int i;
	int scores[SIZE];

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;

	for (i = 0; i < SIZE; i++) {
		printf("socres[%d]=%d\n", i, scores[i]);
	}
}