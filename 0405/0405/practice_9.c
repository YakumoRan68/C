#include <stdio.h>

void main() {
	int x, y, z, big;

	printf("3개의 정수를 입력하시오 : ");
	scanf_s("%d%d%d", &x, &y, &z);

	if (x > y && x > z) big = x;
	else if (y > x && y > z) big = y;
	else big = z;
	printf("가장 큰 수는 %d이다.\n", big);

}