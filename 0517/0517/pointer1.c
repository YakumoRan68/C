#include <stdio.h>

int main() {
	int number = 10;
	int *p;

	p = &number;

	printf("���� number�� ��(number) = %d\n", number);
	printf("���� number�� �ּ�(&number) = %u\n", &number);
	printf("�������� ��(p) = %u\n", p);
	printf("�����Ͱ� ����Ű�� ��(*p) = %d\n", *p);
}