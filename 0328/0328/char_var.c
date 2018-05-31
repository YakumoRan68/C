#include <stdio.h>

void main() {
	char c;

	printf("문자를 입력하시오 : ");
	scanf_s("%c", &c);

	printf("입력된 문자는 %c입니다\n", c);

}