#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 100
int main() {
	int i;
	srand(time(NULL));

	for (i = 0;i < 6;i++) printf("%d ", 1 + (rand() % MAX));
	printf("\n");
}