#include <stdio.h>

main() {
	FILE *fp = NULL;
	int c;

	fp = fopen("test.txt", "r");

	if (fp == NULL) {
		fprintf(stderr, "���� ������ �� �� �����ϴ�.\n");
		return 0;
	}
	while ((c = fgetc(fp)) != EOF) putchar(c);

	fclose(fp);

}