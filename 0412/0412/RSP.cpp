#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void main() {
	//0가위 1바위 2보
	srand(time(NULL));
	int computer = rand() % 3, user;
	printf("내세요 (가위 - 0, 바위 - 1 보 - 2) : ");
	scanf("%d", &user);

	printf("사용자 = %d\n컴퓨터 = %d\n", user, computer);

	if ((user + 1) % 3 == computer) printf("컴퓨터 승리 \n");
	else if (computer == user) printf("비김\n");
	else printf("사용자 승리\n");
}