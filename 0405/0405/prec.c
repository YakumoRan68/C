#include <stdio.h>

void main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 3;
	int result;

	result = a + b * c / d;
	printf("연산값 : %d\n", result);

	result = (a + b) * c / d;
	printf("연산값 : %d\n", result);

	result = a = b = 1;
	printf("연산값 : %d\n", result);
}