#include "lib.h"

int BinarySearch(int left, int right) {
	while (left <= right) {
		int mid = left + (right - left) / 2;

		// mid에 찾고싶은 숫자가 있나 확인
		if (array[mid] == search)
			return mid;

		// 더 크면 왼쪽(작은)부분을 버림
		if (array[mid] < search)
			left = mid + 1;

		// 더 작으면 큰부분을 버림
		else
			right = mid - 1;
	}

	return -1;
}

void Binary() {
	Sort(0, ARRAYSIZE - 1);
	result = BinarySearch(0, ARRAYSIZE);
}