#include "lib.h"

void main() {
	GenerateArray();

	printf("ã�� ���� ���� : ");
	scanf_s("%d", &search);

	//Linear();
	//Binary();
	TreeBinary();

	switch (result) {
		case -1: printf("�ش� ���� ã�� �� �����ϴ�."); break;
		case -2: printf("�ش� ���� ã�ҽ��ϴ�."); break; // Ʈ���������� ���� ã���� ���.(��ġ ������ ����)
		default: printf("�ش� ���� %d��°�� �ֽ��ϴ�.", result);
	}

	free(array);
	getch();
}