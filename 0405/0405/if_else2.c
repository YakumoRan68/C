#include <stdio.h>

void main() {
	int number;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &number);

	if (number % 2 == 0)
		printf("�Էµ� ������ ¦���Դϴ�.\n");
	else
		printf("�Էµ� ������ Ȧ���Դϴ�.\n");
}