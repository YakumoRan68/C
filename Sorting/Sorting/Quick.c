#include "lib.h"

int Partition(int array[], int left, int right) {
	int pivot = array[left];
	int low = left - 1;
	int high = right + 1;

	while (TRUE) {
		//do low++;
		//while (low <= right && array[low] < pivot);
		while (array[++low] < pivot); 
		while (array[--high] > pivot); //조건문만으로 L과 R을 움직이는 것으로 최적화
		
		if (low >= high) break; //블록 탈출을 빨리 하는게 더 속도가 빠름.

		Swap(&array[low], &array[high]);
	} 

	return high;
}

void quicksort(int array[]) {
	//주워진 메모리 공간을 스택처럼 사용하는 구조
	int STACK[STACKSIZE];
	int i = 0;
	int left = 0;
	int right = ARRAYSIZE - 1;

	STACK[i++] = left;
	STACK[i++] = right;

	while (i > 0) {
		right = STACK[--i];
		left = STACK[--i];

		if (left >= right) continue; //블록 탈출을 빨리 하는게 더 속도가 빠름.

		int index = Partition(array, left, right);
		STACK[i++] = left;
		STACK[i++] = index - 1;
		STACK[i++] = index + 1;
		STACK[i++] = right;
	}
}

//http://alienryderflex.com/quicksort/
void quicksort_nostack(int array[]) { 
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
			piv = array[L]; //LR 피봇
			while (L < R) { //TODO : sleep 주면 피봇이 움직이는 것도 보여줄 수 있을듯.
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
	if (left >= right) return; //블록 탈출을 빨리 하는게 더 속도가 빠름.
	int q = Partition(array, left, right);

	QuickSort(array, left, q);
	QuickSort(array, q + 1, right);
}

void Quick(int* ToSort) {
	//quicksort(ToSort); //반복문 사용
	//quicksort_nostack(ToSort); //반복문 사용(스택사용x)
	QuickSort(ToSort, 0, ARRAYSIZE - 1); //재귀문 사용
}