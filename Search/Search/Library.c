#include "lib.h"

int* array;
int search;
int result = -1;

void Swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

static int RandomSeed = 0;
void GenerateArray() {
	array = malloc(sizeof(int) * ARRAYSIZE);
#if ISRANDOM
	RandomSeed = RandomSeed + time(NULL);
	srand(RandomSeed);
#endif

	for (int i = 0; i < ARRAYSIZE; i++) array[i] = ARRAYSIZE - i;
}