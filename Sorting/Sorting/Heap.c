#include "lib.h"

//https://www.youtube.com/watch?v=MtQL_ll5KhQ ������ �ڷ�
void MakeHeap(int list[], int size, int index) {
	int max = index;
	int child = 2 * index + 1; //���� �ڽ�

	//if (list[child] > list[max] || list[child++] > list[max]) max = child;
	max = list[child] > list[max] ? child : list[child + 1] > list[max] ? child + 1 : max;
	//���ʰ� �������� �ڽĵ��� ���� ���� �ڱ⺸�� ū ���Ҹ� ������ �ִ� �ε����� ã��

	if (max != index) { //���� ������ �ڱ��ڽŰ� ���� ū ���Ҹ� ������ �ִ°��� ��. 
						//���� ��͹��� �Ѵܰ� ��������. ���� ���� ���� ���������� ���� �����ϸ� �ִ� �� ������ �Ȱ�.
		Swap(&list[index], &list[max]); //ū ���Ҹ� �θ�� �ø��� �۾�.

		MakeHeap(list, size, max); //�� ū ���Ҹ� ������ �ִ� �ڽ��� ã�� ��������� �Լ� ȣ��.
	}
}

void HeapSort(int list[]) { //��͹� ���
	for (int i = ARRAYSIZE / 2 - 1; i >= 0; i--) //�ֻ�� ���(list[0])�� ã�ư��鼭 �ִ� ���� ���� 
		MakeHeap(list, ARRAYSIZE, i);

	for (int i = ARRAYSIZE - 1; i >= 0; i--) { 
		//�ִ� ������ �ֻ���� ���(list[0])�� ���� ū �����̹Ƿ� 
		//����(�ݺ��� ���� ����) ������ ���� ū ���ڸ� i��ġ�� �ٲٸ�
		//i�� ���� ���� ū ���ڰ� ��ġ�ϰ� �ȴ�. �׸��� ���� �籸��.
		//�� ������ i = 0 ���� �ϸ� ū ���ں��� ������� ������ ���ĵ�.
		Swap(&list[i], &list[0]); // ��, �� ������ ������ ��带 ���°Ͱ� ����

		MakeHeap(list, i, 0); //�ٽ� �ִ����� ������
	}
}

void makeheap(int list[], int size) { //�ִ� ��
	for (int i = 1; i < size; i++) {
		int child = i;
		int root = (child - 1) / 2;
		if (list[child] > list[root]) { //�ڽ� ��尡 �θ� ��庸�� �۾ƾ� ��
			while (list[child] > list[root]) {
				Swap(&list[root], &list[child]);
				child = (child - 1) / 2;
			}
		}
	}
} 

void heapsort(int list[]){ //�ݺ��� ���
	makeheap(list, ARRAYSIZE);
	ShowState();
	for (int i = ARRAYSIZE - 1; i >= 0; i--) {
		Swap(&list[i], &list[0]);
		//������� �� ��������, �θ� ��忡�� �ڽĳ�带 Ž���� ��
		//���� ū ���� ���� �ε����� ã�Ƽ� ��������� 
		int j = 0, index;

		do {
			index = (2 * j + 1); //���� �ڽ��� �ε���

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
