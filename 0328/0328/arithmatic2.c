#include <stdio.h>

void main() {
	double x, y, result;
	printf("�ΰ��� ������ �Է��ϼ��� : ");
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