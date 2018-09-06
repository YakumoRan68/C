#include <stdio.h>

main() {
	FILE *fp = NULL;
	int c;

	fp = fopen("test.txt", "r");

	if (fp == NULL) {
		fprintf(stderr, "원본 파일을 열 수 업습니다.\n");
		return 0;
	}
	while ((c = fgetc(fp)) != EOF) putchar(c);

	fclose(fp);

}