#include <stdio.h>

main() {
	char s[] = "HelloWorld";
	char *p = "HelloWorld";

	s[0] = 'h';
	// p[0] = 'h' = ƨ��

	printf("�����Ͱ� ����Ű�� ���ڿ� = %s\n", p);
	p = "Goodbye";
	printf("�����Ͱ� ����Ű�� ���ڿ� = %s\n", p);

}