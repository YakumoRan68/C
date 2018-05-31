#include <stdio.h>

void main() {
	double x, y, result;
	printf("두개의 정수를 입력하세요 : ");
	scanf_s("%lf %lf", &x, &y);

	result = x + y;
	printf("%.1f + %.1f = %.2f\n", x, y, result);

	result = x * y;
	printf("%.1f * %.1f = %.2f\n", x, y, result);

	result = x - y;
	printf("%.1f - %.1f = %.2f\n", x, y, result);

	result = x / y;
	printf("%.1f / %.1f = %.2f\n", x, y, result);
}