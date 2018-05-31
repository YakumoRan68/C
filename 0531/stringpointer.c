#include <stdio.h>

main() {
	char s[] = "HelloWorld";
	char *p = "HelloWorld";

	s[0] = 'h';
	// p[0] = 'h' = 튕김

	printf("포인터가 가리키는 문자열 = %s\n", p);
	p = "Goodbye";
	printf("포인터가 가리키는 문자열 = %s\n", p);

}