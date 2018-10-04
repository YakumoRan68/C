#include <stdio.h>

int lower(int c) {
	if (c >= 'A' && c <= 'Z') return c + 'a' - 'A'; else return c;
}

main() {
	char a;
	printf("영어 입력 : ");
	a = getche();

	printf("\n소문자로 변환 = %c\n", lower(a));
}