#include <stdio.h>

void main() {
	int x = 10, y = 10;
	printf("x = %d, y = %d \n", x, y);

	x += 1;
	printf("(x += 1) 이후 x = %d\n", x);
	y *= 2;
	printf("(y *= 2) 이후 y = %d\n", y);
}