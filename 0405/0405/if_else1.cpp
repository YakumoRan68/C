#include <stdio.h>

void main() {
	int temperature;

	printf("�µ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &temperature);

	if (temperature > 0)
		printf("������ �����Դϴ�.\n");
	else
		printf("������ �����Դϴ�.\n");
	
	printf("���� �µ��� %d���Դϴ�.\n", temperature);
}