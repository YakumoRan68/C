#include "lib.h"

#if SHOWPROCESS
bool ISSHOWN = FALSE;
#endif
int Partition(int list[], int left, int right) {
	int pivot = list[left], low = left, high = right + 1;

	do {
		do low++;
		while (low <= right && list[low] < pivot);
		do high--;
		while (high >= left && list[high] > pivot);

		if (low<high) 
			Swap(&list[low], &list[high]);
#if SHOWPROCESS
		if (ISSHOWN)
			PrintArray(list);
		ISSHOWN = !ISSHOWN;
#endif
	} while (low<high);

	Swap(&list[left], &list[high]);

	return high;
}

void quicksort(int list[]) { //�ݺ��� ���
	//�ֿ��� �޸� ������ ���ñ���ó�� ����ϴ� ����
	int STACK[STACKSIZE];
	int i = 0, left = 0, right = ARRAYSIZE - 1;

	STACK[i++] = left;
	STACK[i++] = right;

	while (i > 0) {
		right = STACK[--i];
		left = STACK[--i];

		if (left < right) {
			int index = Partition(list, left, right);
			STACK[i++] = left;
			STACK[i++] = index - 1;
			STACK[i++] = index + 1;
			STACK[i++] = right;
		}
	}
}

//http://alienryderflex.com/quicksort/
void quicksort_nostack(int list[]) { 
	//���� ������ ���� ����. MAXLEVEL * 2 ��ŭ�� ������ �ʿ��ϴ�.
	//������ ���δ� �̸�ŭ�� ������ ������ 10^90�� �̻��� ���ҵ��� ������ �� �ְ�,
	//���� 64��Ʈ �ü���� ��ǻ�ͷδ� �� �����Լ����� �޸� �ʰ������� ����ų �� ���ٰ� �Ѵ�.
	int  piv, beg[MAXLEVEL], end[MAXLEVEL], i = 0, L, R;

	beg[0] = 0; 
	end[0] = ARRAYSIZE - 1;
	while (i >= 0) {
		L = beg[i]; 
		R = end[i] - 1;
		if (L < R) {
			piv = list[L];
			while (L < R) { //TODO : sleep �ָ� �Ǻ��� �����̴� �͵� ������ �� ������.
				while (list[R] >= piv && L < R) R--; 
				if (L < R) {
					list[L++] = list[R];
#if SHOWPROCESS
					PrintArray(list);
#endif
					count++;
				}
				while (list[L] <= piv && L < R) L++; 
				if (L < R) {
					list[R--] = list[L];
#if SHOWPROCESS
					PrintArray(list);
#endif
					count++;
				}
			}
			list[L] = piv; 
			beg[i + 1] = L + 1; 
			end[i + 1] = end[i]; 
			end[i++] = L;
			if (end[i] - beg[i] > end[i - 1] - beg[i - 1]) {
				Swap(&beg[i], &beg[i - 1]);
				Swap(&end[i], &end[i - 1]);
			}
		}
		else {
			i--;
		}
	}
}

void QuickSort(int list[], int left, int right) { //��͹� ���
	if (left < right) {
		int q = Partition(list, left, right);

		QuickSort(list, left, q - 1);
		QuickSort(list, q + 1, right);
	}
}

void Quick(int* ToSort) {
	//quicksort(ToSort);
	quicksort_nostack(ToSort);
	//QuickSort(ToSort, 0, ARRAYSIZE - 1);
}