#include <stdio.h>

main() {
	FILE *fp;
	int number;
	char name[30];
	int score;
	char ch;

	fp = fopen("scores.txt", "w");
	if (fp == NULL) {
		printf("성적 파일 scores.txt를 열 수 없습니다.\n");
		exit(1);
	}

	do {
		printf("\n학번 : ");
		scanf("%d", &number);

		printf("이름 : ");
		scanf("%s", name);

		printf("성적 : ");
		scanf("%f", &score);

		fprintf(fp, "%d%s%d", number, name, score);
		printf("데이터 추가를 계속? (y/n) : ");
		ch = getche();
	} while (ch != 'n');

	fclose(fp);
}