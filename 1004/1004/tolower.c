#include <stdio.h>

int lower(int c) {
	if (c >= 'A' && c <= 'Z') return c + 'a' - 'A'; else return c;
}

main() {
	char a;
	printf("���� �Է� : ");
	a = getche();

	printf("\n�ҹ��ڷ� ��ȯ = %c\n", lower(a));
}