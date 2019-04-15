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

void Binary() {
	Sort(0, ARRAYSIZE - 1);
	result = BinarySearch(0, ARRAYSIZE);
}