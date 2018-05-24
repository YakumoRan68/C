#include <stdio.h>

void swap(int x, int y) {
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}

main() {
	int a = 10; int b = 20;

	swap(a, b);
	printf("swap() È£ÃâÈÄ a = %d b = %d\n", a, b);
}