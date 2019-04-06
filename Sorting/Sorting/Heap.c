#include "lib.h"

//https://www.youtube.com/watch?v=MtQL_ll5KhQ ������ �ڷ�
void MakeHeap(int array[], int size, int index) { //
	int max = index;
	int child = 2 * index + 1; //�����ڽ�; child + 1 : ������ �ڽ�

	max = child < size && array[child] > array[max] ? child : max;
	max = ++child < size && array[child] > array[max] ? child : max;
	//�ڽĵ��� ���� ���� �ڱ⺸�� ū ���Ҹ� ������ �ִ� �ε����� ã��

	if (max != index) { //���� ������ �ڱ��ڽŰ� ���� ū ���Ҹ� ������ �ִ°��� ��. 
						//���� ��͹��� �Ѵܰ� ��������. ���� ���� ���� ���������� ���� �����ϸ� �ִ� �� ������ �Ȱ�.
		Swap(&array[index], &array[max]); //ū ���Ҹ� �θ�� �ø��� �۾�.
		MakeHeap(array, size, max); //���� ����(Ʈ�� ������ level)�� �ö�.
	}
}

void HeapSort(int array[]) {
	for (int i = ARRAYSIZE / 2 - 1; i >= 0; i--) //�ֻ�� ���(array[0])�� ã�ư��鼭 �ִ� ���� ���� 
		MakeHeap(array, ARRAYSIZE, i);

	for (int i = ARRAYSIZE - 1; i >= 0; i--) { 
		//�ִ� ������ �ֻ���� ���(array[0])�� ���� ū �����̹Ƿ� 
		//����(�ݺ��� ���� ����) ������ ���� ū ���ڸ� i��ġ�� �ٲٸ�
		//i�� ���� ���� ū ���ڰ� ��ġ�ϰ� �ȴ�. �׸��� ���� �籸��.
		//�� ������ i = 0 ���� �ϸ� ū ���ں��� ������� ������ ���ĵ�.
		Swap(&array[i], &array[0]); // ��, �� ������ ������ ��带 ���°Ͱ� ����
		MakeHeap(array, i, 0); //�ٽ� �ִ����� ������
	}
}

void makeheap(int array[], int size) { //�ִ� ��
	for (int i = 1; i < size; i++) {
		int child = i;
		int root = (child - 1) / 2;
		if (array[child] > array[root]) { //�ڽ� ��尡 �θ� ��庸�� �۾ƾ� ��
			while (array[child] > array[root]) {
				Swap(&array[root], &array[child]);
				child = (child - 1) / 2; //���� ������ �ö�
			}
		}
	}
} 

void heapsort(int array[]){ 
	makeheap(array, ARRAYSIZE);

	for (int i = ARRAYSIZE - 1; i >= 0; i--) {
		Swap(&array[i], &array[0]);

		int index = 0, child;

		do {
			child = (2 * index + 1); //�����ڽ�

			if (array[child] < array[child + 1] && child < (i - 1))
				child++; //�������ڽİ� ���Ͽ� �� ū �ڽ��� �ε����� ����

			if (array[index] < array[child] && child < i) //�θ� ��尡 �ڽ� ��庸�� ������ ��ȯ
				Swap(&array[index], &array[child]);

			index = child; //���� ����� ��ġ�� �����ϰ� ���� ������ �̵�.

		} while (child < i);
	}
}

void Heap(int* ToSort) {
	//HeapSort(ToSort);  //��͹� ���
	heapsort(ToSort); //�ݺ��� ���
}
