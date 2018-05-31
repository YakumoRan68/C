#include <stdio.h>

main() {
	char solution[100] = "meet at midnigt";
	char answer[100] = "____ __ _______";
	char ch;
	int i;

	while (1) {
		printf("\n문자열을 입력하시오 : %s \n", answer);
		printf("글자를 추측하시오 : ");
		ch = getch();

		for (i = 0; solution[i] != NULL; i++) {
			if (solution[i] == ch) answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) break;
	}
	printf("\n\n정답 = %s\n", solution);
}