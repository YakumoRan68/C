#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void main() {
	srand(time(NULL));
	int a = (rand() % 100) + 1/* 1 ~ 100까지 난수 */, guess, tries = 0;
	do {
		printf("정답을 추측하세요 : ");
		scanf("%d", &guess);
		
		if (guess > a) printf("더 작습니다.\n");
		else if (guess < a) printf("더 큽니다.\n");
		tries++;
	} while (guess != a);
	printf("정답입니다. 시도횟수 : %d", tries);
}