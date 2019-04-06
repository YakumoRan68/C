#include "lib.h"

int MEMORY[ARRAYSIZE]; //O(n) ��ŭ�� �߰� ������ �ʿ��ϴ�

void MergeArray(int list[], int left, int mid, int right) {
	int index = left;
	int low = mid + 1;
	int high = left;

	while (index <= mid && low <= right) 
		MEMORY[high++] = list[index] > list[low] ? list[low++] : list[index++];
	//�������� ¥�� �κ��� �ణ ����ȭ

	if (index > mid) 
		for (int i = low; i <= right; i++)
			MEMORY[high++] = list[i];
	else 
		for (int i = index; i <= mid; i++)
			MEMORY[high++] = list[i];
	

	for (int i = left; i <= right; i++) 
		list[i] = MEMORY[i];

#if SHOW_PROGRESS
	PrintArray(list);
	PrintArray(MEMORY);
#endif
	count++;
}

void MergeSort(int list[], int left, int right) { //��͹� ���
	if (left >= right) return; //��� Ż���� ���� �ϴ°� �� �ӵ��� ����.

	int mid = (left + right) / 2;
	MergeSort(list, left, mid);
	MergeSort(list, mid + 1, right);
	MergeArray(list, left, mid, right);
	
}

#define MIN(x, y) x < y ? x : y;
void mergesort(int list[]) { // �ݺ��� ���(Bottom-Up �˰���)
	for (int size = 1; size <= ARRAYSIZE - 1; size = 2 * size) { //1ĭ�� �迭���� �����ؼ� ũ�⸦ 2�辿 �ø���
		for (int i = 0; i < ARRAYSIZE - 1; i += 2 * size) {
			int left = i;
			int mid = i + size - 1;
			int right = MIN(i + 2 * size - 1, ARRAYSIZE - 1);

			MergeArray(list, left, mid, right);
		}
	}
}

void Merge(int* ToSort) {
	//MergeSort(ToSort, 0, ARRAYSIZE - 1);
	mergesort(ToSort);
}