#include <stdio.h>

void main() {
	int x, y, z, big;

	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d%d", &x, &y, &z);

	if (x > y && x > z) big = x;
	else if (y > x && y > z) big = y;
	else big = z;
	printf("���� ū ���� %d�̴�.\n", big);

}