#include <stdio.h>

main() {
	char solution[100] = "meet at midnigt";
	char answer[100] = "____ __ _______";
	char ch;
	int i;

	while (1) {
		printf("\n���ڿ��� �Է��Ͻÿ� : %s \n", answer);
		printf("���ڸ� �����Ͻÿ� : ");
		ch = getch();

		for (i = 0; solution[i] != NULL; i++) {
			if (solution[i] == ch) answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) break;
	}
	printf("\n\n���� = %s\n", solution);
}