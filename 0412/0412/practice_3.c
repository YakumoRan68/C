#include <stdio.h>

void swap(int *a, int *b) { //����
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void main() {
	int a, b, r;

	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d%d", &a, &b);

	if (a < b) swap(&a, &b); // ū��a ������b
	
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	printf("�ִ� ������� : %d\n", a);
}