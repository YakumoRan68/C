#include <stdio.h>

main() {
	FILE *fp = NULL;

	fp = fopen("test.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "파일 test.txt를 열 수 없습니다.");
		exit(1);
	}

	char c;
	for (c = 'a'; c <= 'z'; c++) fputc(c, fp);

	fclose(fp);
}