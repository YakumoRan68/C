#include <stdio.h>

void main() {
	int score;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score);
	if (score >= 60) {
		printf("�հ��Դϴ�.\n");
		printf("���бݵ� ���� �� �ֽ��ϴ�.\n");
	}
	else {
		printf("���հ��Դϴ�.\n");
		printf("�ٽ� �����ϼ���.\n");
	}
}