#include <stdio.h>

void modify(int *ptr) {
	*ptr = 99; //원본을 변경한다.
}

main() {
	int number = 1;

	modify(&number);
	printf("number = %d\n", number);
}