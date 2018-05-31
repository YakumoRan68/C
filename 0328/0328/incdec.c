#include <stdio.h>
#define SEC_PER_MINUTE 60

void main() {
	int x, y;

	x = 1;
	y = ++x;
	printf("x = %d y = %d\n", x, y);

	y = x++;
	printf("x = %d y = %d\n", x, y);

}