#include <stdio.h>
#include <stdlib.h>

void main() {
	int c, k, num = 10;
	char *str;

	str = malloc(num + 1);
	printf("���ڸ� %d�� �Է��ϼ���.\n", num);
	for (k = 0; k < 10; k++) {
		c = getchar();
		putchar(c);
		str[k] = c;
	}
	str[k] = '\0';
	printf("\n\nstr = %s\n", str);
	free(str);
}