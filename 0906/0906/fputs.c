#include <stdio.h>

int main(void) {
	FILE *fp = NULL;

	fp = fopen("test.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "������ �� �� �����ϴ�.\n");
		return 0;
	};

	char c;
	for (c = 'a'; c <= 'z'; c++) {
		fputc(c, fp);
		putchar(c);
	}

	fclose(fp);
}