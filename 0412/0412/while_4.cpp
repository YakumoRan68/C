#include <stdio.h>

void main() {
	int n;
	int i = 1;

	printf("����ϱ� ���� �� : ");
	scanf("%d", &n);

	while (i <= 9) {
		printf("%d * %d = %d\n", n, i, n*i);
		i++;
	}
}