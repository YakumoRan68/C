#include <stdio.h>

void main() {
	int x;
	char *a = "¦��"; //���ڿ� �����Ϳ� �־����
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	if (x % 2 == 1) a = "Ȧ��";
	printf("%d�� %s�Դϴ�.", x, a);
}