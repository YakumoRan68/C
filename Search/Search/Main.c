#include "lib.h"

main() {
	GenerateArray();

	printf("ã�� ���� ���� : ");
	scanf_s("%d", &search);

	//Linear();
	Binary();

	result == -1 ? printf("�ش� ���� ã�� �� �����ϴ�.") : printf("�ش� ���� %d��°�� �ֽ��ϴ�.", result);

	free(array);
	getch();
}