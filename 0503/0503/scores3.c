#include <stdio.h>
#define SIZE 5

void main() {
	int scores[SIZE] = { 31, 63, 62, 87, 14 };
	int i;

	for (i = 0; i < SIZE; i++) printf("scores[%d] = %d\n", i, scores[i]);
}