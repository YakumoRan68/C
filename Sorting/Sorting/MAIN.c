#include "lib.h"

//TODO : 배열 1만개 정렬 시간 벤치마킹(메모리 100개 사용)

void main() {
	int* ToSort = GenerateRandomArray(ARRAYSIZE);
	PrintLine("ToSort", ToSort);

	//Bubble(ToSort);
	//Heap(ToSort);
	//Insertion(ToSort);
	//Merge(ToSort);
	Quick(ToSort);
	//Selection(ToSort);

	PrintLine("Sorted", ToSort);

	free(array);
	getchar();
}