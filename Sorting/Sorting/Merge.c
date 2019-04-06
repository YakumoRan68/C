#include "lib.h"

int MEMORY[ARRAYSIZE]; //O(n) 만큼의 추가 공간이 필요하다

void MergeArray(int array[], int left, int mid, int right) {
	int index = left;
	int low = mid + 1;
	int high = left;

	while (index <= mid && low <= right) 
		MEMORY[high++] = array[index] > array[low] ? array[low++] : array[index++];
	//교수님이 짜신 부분을 약간 최적화

	if (index > mid) 
		for (int i = low; i <= right; i++)
			MEMORY[high++] = array[i];
	else 
		for (int i = index; i <= mid; i++)
			MEMORY[high++] = array[i];
	

	for (int i = left; i <= right; i++) 
		array[i] = MEMORY[i];

#if SHOW_PROGRESS
	PrintArray(array);
	PrintArray(MEMORY);
#endif
	count++;
}

void MergeSort(int array[], int left, int right) {
	if (left >= right) return; //블록 탈출을 빨리 하는게 더 속도가 빠름.

	int mid = (left + right) / 2;
	MergeSort(array, left, mid);
	MergeSort(array, mid + 1, right);
	MergeArray(array, left, mid, right);
	
}

#define MIN(x, y) x < y ? x : y;
void mergesort(int array[]) { 
	for (int size = 1; size <= ARRAYSIZE - 1; size = 2 * size) { //1칸의 배열부터 시작해서 크기를 2배씩 늘린다
		for (int i = 0; i < ARRAYSIZE - 1; i += 2 * size) {
			int left = i;
			int mid = i + size - 1;
			int right = MIN(i + 2 * size - 1, ARRAYSIZE - 1);

			MergeArray(array, left, mid, right);
		}
	}
}

void Merge(int* ToSort) {
	MergeSort(ToSort, 0, ARRAYSIZE - 1); //재귀문 사용
	//mergesort(ToSort); // 반복문 사용(Bottom-Up 알고리즘)
}