#include <stdio.h>

int GetInteger() {
	int value;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &value);
	return value;
}

int GetMax(int x, int y) {
	if (x > y) return x;
	else return y;
}

main() {
	int a = GetInteger();
	int b = GetInteger();

	printf("�� �� �߿��� ū ���� %d�Դϴ�.\n", GetMax(a, b));
}

