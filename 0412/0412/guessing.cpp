#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void main() {
	srand(time(NULL));
	int a = (rand() % 100) + 1/* 1 ~ 100���� ���� */, guess, tries = 0;
	do {
		printf("������ �����ϼ��� : ");
		scanf("%d", &guess);
		
		if (guess > a) printf("�� �۽��ϴ�.\n");
		else if (guess < a) printf("�� Ů�ϴ�.\n");
		tries++;
	} while (guess != a);
	printf("�����Դϴ�. �õ�Ƚ�� : %d", tries);
}