#include <stdio.h>
#include <string.h>

main() {
	char key[] = "���";
	char buffer[80];

	do {
		printf("���� ���� �����ϴ� ������ �����ϱ��? ");
		scanf("%s", buffer);
	} while (strcmp(key, buffer) != 0);

	printf("�¾ҽ��ϴ�!\n");
}