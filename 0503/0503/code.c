#include <stdio.h>
#define SIZE 26

void main() {
	int i;
	char codes[SIZE];

	for (i = 0; i < SIZE; i++) codes[i] = 'a' + i;

	for (i = 0; i < SIZE; i++) printf("%c ", codes[i]);
	printf("\n");
}