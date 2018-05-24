#include <stdio.h>

void modify(int value) {
	value = 99;
}

main() {
	int number = 1;

	modify(number);
	printf("number = %d\n", number);
}