#include "lib.h"

//https://www.youtube.com/watch?v=MtQL_ll5KhQ ������ �ڷ�
void MakeHeap(int list[], int size, int index) { //
	int max = index;
	int child = 2 * index + 1; //�����ڽ�; child + 1 : ������ �ڽ�

	max = child < size && list[child] > list[max] ? child : max;
	max = ++child < size && list[child] > list[max] ? child : max;
	//�ڽĵ��� ���� ���� �ڱ⺸�� ū ���Ҹ� ������ �ִ� �ε����� ã��

	if (max != index) { //���� ������ �ڱ��ڽŰ� ���� ū ���Ҹ� ������ �ִ°��� ��. 
						//���� ��͹��� �Ѵܰ� ��������. ���� ���� ���� ���������� ���� �����ϸ� �ִ� �� ������ �Ȱ�.
		Swap(&list[index], &list[max]); //ū ���Ҹ� �θ�� �ø��� �۾�.
		MakeHeap(list, size, max); //���� ����(Ʈ�� ������ level)�� �ö�.
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
				child = (child - 1) / 2; //���� ������ �ö�
			}
		}
	}
} 

void heapsort(int list[]){ //�ݺ��� ���
	makeheap(list, ARRAYSIZE);

	for (int i = ARRAYSIZE - 1; i >= 0; i--) {
		Swap(&list[i], &list[0]);

		int index = 0, child;

		do {
			child = (2 * index + 1); //�����ڽ�

			if (list[child] < list[child + 1] && child < (i - 1))
				child++; //�������ڽİ� ���Ͽ� �� ū �ڽ��� �ε����� ����

			if (list[index] < list[child] && child < i) //�θ� ��尡 �ڽ� ��庸�� ������ ��ȯ
				Swap(&list[index], &list[child]);

			index = child; //���� ����� ��ġ�� �����ϰ� ���� ������ �̵�.

		} while (child < i);
	}
}

void Heap(int* ToSort) {
	HeapSort(ToSort);
	//heapsort(ToSort);
}
