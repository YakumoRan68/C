#include <stdio.h>

void main() {
	int i = 1, sum = 0;
	while (i <= 1000) {
		sum += i;
		i++;
	}
	printf("���� %d�Դϴ�.\n", sum);
}