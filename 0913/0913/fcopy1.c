#include <stdio.h>

main() {
	FILE *fp1, *fp2;
	char file1[100], file2[100];

	printf("���� ���� �̸� : ");
	scanf("%s", file1);

	printf("���� ���� �̸� : ");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL) {
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file1);
		exit(1);
	}

	if ((fp2 = fopen(file2, "w")) == NULL) {
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file2);
		exit(1);
	}

	int c;
	while ((c = fgetc(fp1)) != EOF) fputc(c, fp2);

	fclose(fp1);
	fclose(fp2);
}