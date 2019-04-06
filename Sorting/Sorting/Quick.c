#include "lib.h"

int Partition(int array[], int left, int right) {
	int pivot = array[left];
	int low = left - 1;
	int high = right + 1;

	while (TRUE) {
		//do low++;
		//while (low <= right && array[low] < pivot);
		while (array[++low] < pivot); 
		while (array[--high] > pivot); //���ǹ������� L�� R�� �����̴� ������ ����ȭ
		
		if (low >= high) break; //��� Ż���� ���� �ϴ°� �� �ӵ��� ����.

		Swap(&array[low], &array[high]);
	} 

	return high;
}

void quicksort(int array[]) {
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

		int index = Partition(array, left, right);
		STACK[i++] = left;
		STACK[i++] = index - 1;
		STACK[i++] = index + 1;
		STACK[i++] = right;
	}
}

//http://alienryderflex.com/quicksort/
void quicksort_nostack(int array[]) { 
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
			piv = array[L]; //LR �Ǻ�
			while (L < R) { //TODO : sleep �ָ� �Ǻ��� �����̴� �͵� ������ �� ������.
				while (array[R] >= piv && L < R) R--; 
				if (L < R) {
					array[L++] = array[R];
#if SHOW_PROGRESS
					PrintArray(array);
#endif
					count++;
				}
				while (array[L] <= piv && L < R) L++; 
				if (L < R) {
					array[R--] = array[L];
#if SHOW_PROGRESS
					PrintArray(array);
#endif
					count++;
				}
			}
			array[L] = piv; 
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

void QuickSort(int array[], int left, int right) {
	if (left >= right) return; //��� Ż���� ���� �ϴ°� �� �ӵ��� ����.
	int q = Partition(array, left, right);

	QuickSort(array, left, q);
	QuickSort(array, q + 1, right);
}

void Quick(int* ToSort) {
	//quicksort(ToSort); //�ݺ��� ���
	//quicksort_nostack(ToSort); //�ݺ��� ���(���û��x)
	QuickSort(ToSort, 0, ARRAYSIZE - 1); //��͹� ���
}