#include <stdio.h>

main() {
	FILE *fp;
	int number;
	char name[30];
	int score;
	char ch;

	fp = fopen("scores.txt", "w");
	if (fp == NULL) {
		printf("���� ���� scores.txt�� �� �� �����ϴ�.\n");
		exit(1);
	}

	do {
		printf("\n�й� : ");
		scanf("%d", &number);

		printf("�̸� : ");
		scanf("%s", name);

		printf("���� : ");
		scanf("%f", &score);

		fprintf(fp, "%d%s%d", number, name, score);
		printf("������ �߰��� ���? (y/n) : ");
		ch = getche();
	} while (ch != 'n');

	fclose(fp);
}