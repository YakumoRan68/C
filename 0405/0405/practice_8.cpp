#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL)); // �����õ带 ����ð����� ����
	int coin = rand() % 2;

	if (coin == 0)
		printf("�ո��Դϴ�.\n");
	else
		printf("�޸��Դϴ�.\n");
}