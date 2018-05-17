#include <stdio.h>

int main() {
	int number = 10;
	int *p;

	p = &number;

	printf("변수 number의 값(number) = %d\n", number);
	printf("변수 number의 주소(&number) = %u\n", &number);
	printf("포인터의 값(p) = %u\n", p);
	printf("포인터가 가리키는 값(*p) = %d\n", *p);
}