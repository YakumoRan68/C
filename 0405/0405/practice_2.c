#include <stdio.h>

void main() {
	int x, y;

	printf("ù ��° ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	printf("�� ��° ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &y);

	printf("���� %d�̰� �������� %d�Դϴ�.\n", x / y, x % y);
}