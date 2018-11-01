#include <stdio.h>
#include <stdlib.h>

void main() {
	int c, k, num = 10;
	char *str;

	str = malloc(num + 1);
	printf("문자를 %d개 입력하세요.\n", num);
	for (k = 0; k < 10; k++) {
		c = getchar();
		putchar(c);
		str[k] = c;
	}
	str[k] = '\0';
	printf("\n\nstr = %s\n", str);
	free(str);
}