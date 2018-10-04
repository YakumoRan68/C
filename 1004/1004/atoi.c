#include <stdio.h>

int atoi(char s[]) {
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) n = 10 * n + (s[i] - '0');

	return n;
}

main() {
	printf("숫자로 변환 = %d\n", atoi("35"));
}