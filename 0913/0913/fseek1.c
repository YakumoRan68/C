#include <stdio.h>
#include <stdlib.h>

main() {
	long length;

	FILE *fp = fopen("lena.raw", "rb");
	if (fp == NULL) {
		printf("lena.raw ������ �� �� �����ϴ�.");
		exit(1);
	}
	fseek(fp, 0, SEEK_END);

	length = ftell(fp);
	printf("���� ũ�� = %d ����Ʈ\n", length);
	fclose(fp);
}