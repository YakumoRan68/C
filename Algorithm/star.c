#include <stdio.h>

int abs(int x) {
	return x > 0 ? x : -x;
}

//                  ����
// 1. for���� 2����(�ٱ� for��, ���� for��)
// 2. �ٱ��� for���� ������ i++�θ�
// 3. ���� for���� ���ǹ��� ������ 1��.
// �� ������ for - for - if �� �ִ� �����θ� ������.
// �̷л� ǥ���Ϸ��� �Ϳ� ������ �ְ�, 2���� ��� ����̸� for�� 2���� �����ϴٴ� ���� ����.

void main() {
	int MAX = 3;
	//scanf_s("%d", &MAX);

	printf("1\n");

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) 
			i > j - 1 ? printf("*") : printf(" ");
		printf("\n");
	}

	printf("\n2\n");

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) 
			i < MAX - j ? printf("*") : printf(" ");
		printf("\n");
	}

	printf("\n3\n");

	for (int i = 0; i < MAX; i++) { 
		for (int j = 0; j < MAX; j++) 
			i < MAX - j - 1 ? printf(" ") : printf("*");
		printf("\n");
	}

	printf("\n4\n");

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) 
			i > j ? printf(" ") : printf("*");
		printf("\n");
	}

	printf("\n5\n");

	for (int i = 0; i < 2 * MAX - 1; i++) {
		for (int j = 0; j < MAX; j++)
			abs(MAX - i - 1) < MAX - j ? printf("*") : printf(" ");
		printf("\n");
	}

	printf("\n6\n");

	for (int i = 0; i < 2 * MAX - 1; i++) {
		for (int j = 0; j < MAX; j++)
			abs(MAX - i - 1) < j + 1? printf("*") : printf(" ");
		printf("\n");
	}

	printf("\n7\n");

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX * 2 - 1; j++)
			i < MAX - abs(MAX - j - 1) ? printf("*") : printf(" ");
		printf("\n");
	}

	printf("\n8\n");

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX * 2 - 1; j++)
			i < abs(MAX - j - 1) ? printf(" ") : printf("*");
		printf("\n");
	}

	printf("\n9\n");

	for (int i = 0; i < MAX * 2 - 1; i++) {
		for (int j = 0; j < MAX * 2 - 1; j++)
			abs(MAX - i - 1) < MAX - abs(MAX - j - 1) ? printf("*") : printf(" ");
		printf("\n");
	}

	printf("\n10\n");

	for (int i = 0; i < MAX * 2 - 1; i++) {
		for (int j = 0; j < MAX * 2 - 1; j++)
			abs(MAX - i - 1) < abs(MAX - j - 1) ? printf(" ") : printf("*");
		printf("\n");
	}

	printf("\nwindmill\n");

	for (int i = 0; i < MAX * 2; i++) {
		for (int j = 0; j < MAX * 2; j++)
			abs(MAX - abs(i - MAX + 1)) % (MAX + 1) - 1 < j ? printf("*") : printf(" ");
		printf("\n");
	}
}