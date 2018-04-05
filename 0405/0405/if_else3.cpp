#include <stdio.h>

void main() {
	int score;

	printf("성적을 입력하시오 : ");
	scanf_s("%d", &score);
	if (score >= 60) {
		printf("합격입니다.\n");
		printf("장학금도 받을 수 있습니다.\n");
	}
	else {
		printf("불합격입니다.\n");
		printf("다시 도전하세요.\n");
	}
}