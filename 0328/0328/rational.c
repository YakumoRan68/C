#include <stdio.h>

void main() {
	int x, y;

	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &x, &y);

	printf("%d == %d�� ����� : %d\n", x, y, x == y);
	printf("%d != %d�� ����� : %d\n", x, y, x != y);
	printf("%d > %d�� ����� : %d\n", x, y, x > y);
	printf("%d < %d�� ����� : %d\n", x, y, x < y);
	printf("%d >= %d�� ����� : %d\n", x, y, x >= y);
	printf("%d <= %d�� ����� : %d\n", x, y, x <= y);
}