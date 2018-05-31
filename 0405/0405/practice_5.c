#include <stdio.h>

void main() {
	int x, n_1, n_2, n_3;

	printf("세 자리수의 정수를 입력하시오 : ");
	scanf_s("%d", &x);

	n_1 = x / 100; // 100의자리
	n_2 = x / 10 % 10; //10의자리
	n_3 = x % 10; // 1의자리
	printf("백의 자리수 : %d\n십의 자리수 : %d\n일의 자리수 : %d\n", n_1, n_2, n_3);
}