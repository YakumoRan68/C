#include <stdio.h>

main() {
	FILE *fp = NULL;
	char str[100];

	fp = fopen("file.txt", "w");

	if (fp == NULL) {
		fprintf(stderr, "���� file.txt�� �� �� �����ϴ�.\n");
		exit(0);
	}

	do {
		gets(str);
		fputs(str, fp);
	} while (strlen(str) != 0);
	
	fclose(fp);
	return 0;
} 