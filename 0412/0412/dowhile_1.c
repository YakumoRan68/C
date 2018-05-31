#include <stdio.h>
#include <windows.h>

void main() {
	int i = 0;
	do {
		system("cls");
		printf("1 - 파일열기\n2 - 파일저장하기\n3 - 종료\n하나를 선택하시오 : ");
		scanf("%d", &i);
	} while (i < 1 || i > 3);
}