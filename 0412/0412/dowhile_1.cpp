#include <stdio.h>
#include <windows.h>

void main() {
	int i = 0;
	do {
		system("cls");
		printf("1 - ���Ͽ���\n2 - ���������ϱ�\n3 - ����\n�ϳ��� �����Ͻÿ� : ");
		scanf("%d", &i);
	} while (i < 1 || i > 3);
}