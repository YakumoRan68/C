#include <stdio.h>

int strlen(char s[]) {
	int i;
	i = 0;
	while (s[i] != '\0') ++i;
	return i;
}

main() {
	char a[100];
	gets(a);

	printf("���ڿ� ���� : %d\n", strlen(a));
}