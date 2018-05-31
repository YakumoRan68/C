#include <stdio.h>

void main() {
	int x;
	char *a = "짝수"; //문자열 포인터에 넣어야함
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	if (x % 2 == 1) a = "홀수";
	printf("%d은 %s입니다.", x, a);
}