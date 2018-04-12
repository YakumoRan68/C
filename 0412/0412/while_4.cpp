#include <stdio.h>

void main() {
	int n;
	int i = 1;

	printf("출력하기 싶은 단 : ");
	scanf("%d", &n);

	while (i <= 9) {
		printf("%d * %d = %d\n", n, i, n*i);
		i++;
	}
}