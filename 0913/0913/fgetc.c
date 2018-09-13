#include <stdio.h>

main() {
	FILE *fp = NULL;
	int c;

	fp = fopen("test.txt", "r");
	if (fp == NULL) {
		fprintf(stderr, "원본파일 test.txt를 열 수 없습니다.");
		exit(1);
	}

	while ((c = fgetc(fp)) != EOF) putchar(c);

	fclose(fp);
}