#include "lib.h"

//https://www.youtube.com/watch?v=MtQL_ll5KhQ 참고한 자료
void MakeHeap(int list[], int size, int index) {
	int max = index;
	int child = 2 * index + 1; //왼쪽 자식

	//if (list[child] > list[max] || list[child++] > list[max]) max = child;
	max = list[child] > list[max] ? child : list[child + 1] > list[max] ? child + 1 : max;
	//왼쪽과 오른쪽의 자식들을 보고 가장 자기보다 큰 원소를 가지고 있는 인덱스를 찾음

	if (max != index) { //만약 같으면 자기자신가 가장 큰 원소를 가지고 있는것이 됨. 
						//이후 재귀문을 한단계 빠져나옴. 가장 상위 스택 레벨에서도 위가 성립하면 최대 힙 구조가 된것.
		Swap(&list[index], &list[max]); //큰 원소를 부모로 올리는 작업.

		MakeHeap(list, size, max); //더 큰 원소를 가지고 있는 자식을 찾아 재귀적으로 함수 호출.
	}
}

void HeapSort(int list[]) { //재귀문 사용
	for (int i = ARRAYSIZE / 2 - 1; i >= 0; i--) //최상단 노드(list[0])을 찾아가면서 최대 힙을 구성 
		MakeHeap(list, ARRAYSIZE, i);

	for (int i = ARRAYSIZE - 1; i >= 0; i--) { 
		//최대 힙에서 최상단의 노드(list[0])가 가장 큰 숫자이므로 
		//현재(반복문 범위 내의) 힙에서 가장 큰 숫자를 i위치와 바꾸면
		//i에 현재 가장 큰 숫자가 위치하게 된다. 그리고 힙을 재구성.
		//이 과정을 i = 0 까지 하면 큰 숫자부터 순서대로 역으로 정렬됨.
		Swap(&list[i], &list[0]); // 즉, 이 과정은 힙에서 노드를 빼는것과 같음

		MakeHeap(list, i, 0); //다시 최대힙을 구성함
	}
}

void makeheap(int list[], int size) { //최대 힙
	for (int i = 1; i < size; i++) {
		int child = i;
		int root = (child - 1) / 2;
		if (list[child] > list[root]) { //자식 노드가 부모 노드보다 작아야 함
			while (list[child] > list[root]) {
				Swap(&list[root], &list[child]);
				child = (child - 1) / 2;
			}
		}
	}
} 

void heapsort(int list[]){ //반복문 사용
	makeheap(list, ARRAYSIZE);
	ShowState();
	for (int i = ARRAYSIZE - 1; i >= 0; i--) {
		Swap(&list[i], &list[0]);
		//재귀적인 힙 구성에서, 부모 노드에서 자식노드를 탐색할 때
		//가장 큰 값을 가진 인덱스를 찾아서 재귀적으로 
		int j = 0, index;

		do {
			index = (2 * j + 1); //왼쪽 자식의 인덱스

			if (list[index] < list[index + 1] && index < (i - 1))
				index++;

			// if parent is smaller than child  
			// then swapping parent with child  
			// having higher value 
			if (list[j] < list[index] && index < i)
				Swap(&list[j], &list[index]);

			j = index;

		} while (index < i);
	}
}

void Heap(int* ToSort) {
	HeapSort(ToSort);
	//heapsort(ToSort);
}
