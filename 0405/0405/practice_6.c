#include <stdio.h>

void main() {
	float a, b;

	printf("2개의 정수를 입력하시오 : ");
	scanf_s("%f%f", &a, &b);

	printf("합의 정수부 = %d", (int)(a+b));
}