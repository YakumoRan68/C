#include "lib.h"

int BinarySearch(int left, int right) {
	while (left <= right) {
		int mid = left + (right - left) / 2;

		// mid�� ã����� ���ڰ� �ֳ� Ȯ��
		if (array[mid] == search)
			return mid;

		// �� ũ�� ����(����)�κ��� ����
		if (array[mid] < search)
			left = mid + 1;

		// �� ������ ū�κ��� ����
		else
			right = mid - 1;
	}

	return -1;
}

int binarySearch(int left, int right) {
	if (right >= left) {
		int mid = left + (right - left) / 2;

		if (array[mid] == search)  return mid;

		if (array[mid] > search) return binarySearch(left, mid - 1);

		return binarySearch(mid + 1, right);
	}

	return -1;
}

void Binary() {
	Sort(0, ARRAYSIZE - 1);
	result = BinarySearch(0, ARRAYSIZE); //�ݺ���
	//result = binarySearch(0, ARRAYSIZE - 1); //��͹�
}