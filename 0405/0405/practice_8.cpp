#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL)); // 랜덤시드를 현재시간으로 삼음
	int coin = rand() % 2;

	if (coin == 0)
		printf("앞면입니다.\n");
	else
		printf("뒷면입니다.\n");
}