#include <stdio.h>

main() {
	FILE *fp = NULL;
	int c;

	fp = fopen("test.txt", "r");
	if (fp == NULL) {
		fprintf(stderr, "�������� test.txt�� �� �� �����ϴ�.");
		exit(1);
	}

	while ((c = fgetc(fp)) != EOF) putchar(c);

	fclose(fp);
}