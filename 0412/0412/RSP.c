#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void main() {
	//0���� 1���� 2��
	srand(time(NULL));
	int computer = rand() % 3, user;
	printf("������ (���� - 0, ���� - 1 �� - 2) : ");
	scanf("%d", &user);

	printf("����� = %d\n��ǻ�� = %d\n", user, computer);

	if ((user + 1) % 3 == computer) printf("��ǻ�� �¸� \n");
	else if (computer == user) printf("���\n");
	else printf("����� �¸�\n");
}