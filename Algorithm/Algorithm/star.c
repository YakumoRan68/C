#include <stdio.h>

int abs(int x) {
	return x > 0 ? x : -x;
}

//                  ����
// 1. for���� 2����(�ٱ� for��, ���� for��)
// 2. �ٱ��� for���� ������ i++�θ�
// 3. ���� for���� ���ǹ��� ������ 1��.

void main() {
	int MAX;
	scanf_s("%d", &MAX);

	printf("1\n");

	for (int i = 1; i <= MAX; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n2\n");

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX - i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n3\n");

	for (int i = 0; i < MAX; i++) { 
		for (int j = 0; j < MAX; j++) {
			MAX - j - 1 > i ? printf(" ") : printf("*");
		}
		printf("\n");
	}

	printf("\n4\n");

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			i > j ? printf(" ") : printf("*");
		}
		printf("\n");
	}

	printf("\n5\n");

	for (int i = 1; i <= 2 * MAX - 1; i++) {
		for (int j = MAX; j > 0; j--) {
			i < j ? printf("*") : printf(" ");
		}
		printf("\n");
	}

	getch();
}