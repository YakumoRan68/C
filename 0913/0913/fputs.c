#include <stdio.h>

main() {
	FILE *fp = NULL;

	fp = fopen("test.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "���� test.txt�� �� �� �����ϴ�.");
		exit(1);
	}

	char c;
	for (c = 'a'; c <= 'z'; c++) fputc(c, fp);

	fclose(fp);
}