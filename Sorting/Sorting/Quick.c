#include "lib.h"

int Partition(int list[], int left, int right) {
	int pivot = list[left];
	int low = left - 1;
	int high = right + 1;

	while (TRUE) {
		//do low++;
		//while (low <= right && list[low] < pivot);
		while (list[++low] < pivot); 
		while (list[--high] > pivot); //���ǹ������� L�� R�� �����̴� ������ ����ȭ
		
		if (low >= high) break; //��� Ż���� ���� �ϴ°� �� �ӵ��� ����.

		Swap(&list[low], &list[high]);
	} 

	return high;
}

void quicksort(int list[]) { //�ݺ��� ���
	//�ֿ��� �޸� ������ ����ó�� ����ϴ� ����
	int STACK[STACKSIZE];
	int i = 0;
	int left = 0;
	int right = ARRAYSIZE - 1;

	STACK[i++] = left;
	STACK[i++] = right;

	while (i > 0) {
		right = STACK[--i];
		left = STACK[--i];

		if (left >= right) continue; //��� Ż���� ���� �ϴ°� �� �ӵ��� ����.

		int index = Partition(list, left, right);
		STACK[i++] = left;
		STACK[i++] = index - 1;
		STACK[i++] = index + 1;
		STACK[i++] = right;
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
			piv = list[L]; //LR �Ǻ�
			while (L < R) { //TODO : sleep �ָ� �Ǻ��� �����̴� �͵� ������ �� ������.
				while (list[R] >= piv && L < R) R--; 
				if (L < R) {
					list[L++] = list[R];
#if SHOW_PROGRESS
					PrintArray(list);
#endif
					count++;
				}
				while (list[L] <= piv && L < R) L++; 
				if (L < R) {
					list[R--] = list[L];
#if SHOW_PROGRESS
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
	if (left >= right) return; //��� Ż���� ���� �ϴ°� �� �ӵ��� ����.
	int q = Partition(list, left, right);

	QuickSort(list, left, q);
	QuickSort(list, q + 1, right);
}

void Quick(int* ToSort) {
	quicksort(ToSort);
	//quicksort_nostack(ToSort);
	//QuickSort(ToSort, 0, ARRAYSIZE - 1);
}