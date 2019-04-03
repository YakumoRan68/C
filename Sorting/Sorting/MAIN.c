#include "lib.h"

void main() {
	int* ToSort = GenerateRandomArray(ARRAYSIZE);
	PrintLine("ToSort", ToSort);

	//Bubble(ToSort);
	Heap(ToSort);
	//Insertion(ToSort);
	//Merge(ToSort);
	//Quick(ToSort);
	//Selection(ToSort);

	PrintLine("Sorted", ToSort);

	free(array);
	getchar();
}