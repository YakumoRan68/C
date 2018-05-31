#include <stdio.h>

void main() {
	int temperature;

	printf("온도를 입력하시오 : ");
	scanf_s("%d", &temperature);

	if (temperature > 0)
		printf("영상의 날씨입니다.\n");
	else
		printf("영하의 날씨입니다.\n");
	
	printf("현재 온도는 %d도입니다.\n", temperature);
}