#include <stdio.h>

main() {
	char name[100];
	char address[100];

	printf("�̸��� ��� �ǽó���? ");
	gets_s(name, 99);

	printf("��� ��ó���? ");
	gets_s(address, 99);

	printf("�ȳ��ϼ���, %s�� ��� %s��.", address, name);
}