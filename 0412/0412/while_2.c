#include <stdio.h>

void main() {
	int meter;
	int i = 0;

	while (i < 3) {
		meter = i * 1609;
		printf("%d ������ %d�����Դϴ�.\n", i, meter);
		i++;
	}
}