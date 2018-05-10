#include <stdio.h>

int GetInteger() {
	int value;
	printf("정수를 입력하시오 : ");
	scanf("%d", &value);
	return value;
}

int GetMax(int x, int y) {
	if (x > y) return x;
	else return y;
}

main() {
	int a = GetInteger();
	int b = GetInteger();

	printf("두 수 중에서 큰 수는 %d입니다.\n", GetMax(a, b));
}

