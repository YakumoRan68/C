#include <stdio.h>

void modify(int *ptr) {
	*ptr = 99; //������ �����Ѵ�.
}

main() {
	int number = 1;

	modify(&number);
	printf("number = %d\n", number);
}