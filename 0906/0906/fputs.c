#include <stdio.h>

int main(void) {
	FILE *fp = NULL;

	fp = fopen("test.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "파일을 열 수 없습니다.\n");
		return 0;
	};

	char c;
	for (c = 'a'; c <= 'z'; c++) {
		fputc(c, fp);
		putchar(c);
	}

	fclose(fp);
}