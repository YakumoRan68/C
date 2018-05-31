#include <stdio.h>

void main() {
	int x;

	printf("첫 번째 정수를 입력하시오 : ");
	scanf_s("%d", &x);

	printf("세제곱값은 %d * %d *% d = %d 입니다\n", x, x, x, x*x*x);
}