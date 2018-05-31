#include <stdio.h>
// SDL check off
void main() {

	char op;
	int x, y;

	printf("수식을 입력하시오 : ");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+') printf("%d\n", x+y);
	else if (op == '-') printf("%d\n", x-y);
	else if (op == '*') printf("%d\n", x*y);
	else if (op == '/') printf("%d\n", x/y);
	else printf("지원되지 않는 연산자입니다. \n");

}