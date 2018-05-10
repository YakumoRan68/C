#include <stdio.h>

int GetInteger() {
	int value;
	printf("정수를 입력하시오 : ");
	scanf("%d", &value);
	return value;
}

int Power(int x, int y) {
	int i;
	long result = 1;
	
	for (i = 0; i < y; i++) result *= x;

	return result;
}

main() {
	int x = GetInteger();
	int y = GetInteger();

	printf("3 ^ 4 = %d", Power(x, y));
}