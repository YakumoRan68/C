#include <stdio.h>
#include <string.h>

main() {
	char src[] = "Hello";
	char dst[6];

	strcpy(dst, src);
	printf("����� ���ڿ� = %s \n", dst);
	return 0;
}