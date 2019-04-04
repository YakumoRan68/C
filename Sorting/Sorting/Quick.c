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

void quicksort(int list[]) { //반복문 사용
	//주워진 메모리 공간을 스택구조처럼 사용하는 구조
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
	//스택 구조가 없는 구현. MAXLEVEL * 2 만큼의 공간이 필요하다.
	//필자의 말로는 이만큼의 공간만 있으면 10^90개 이상의 원소들을 정렬할 수 있고,
	//현재 64비트 운영체제의 컴퓨터로는 이 정렬함수에서 메모리 초과문제를 일으킬 수 없다고 한다.
	int  piv, beg[MAXLEVEL], end[MAXLEVEL], i = 0, L, R;

	beg[0] = 0; 
	end[0] = ARRAYSIZE - 1;
	while (i >= 0) {
		L = beg[i]; 
		R = end[i] - 1;
		if (L < R) {
			piv = list[L];
			while (L < R) { //TODO : sleep 주면 피봇이 움직이는 것도 보여줄 수 있을듯.
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

void QuickSort(int list[], int left, int right) { //재귀문 사용
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