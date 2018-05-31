#include <stdio.h>
void main() {
	int id, pass;
	printf("아이디와 패스워드를 4개의 문자로 입력하세요 : \n");
	printf("id : ____\b\b\b\b");
	scanf_s("%d", &id);
	printf("pass : ____\b\b\b\b");
	scanf_s("%d", &pass);
	printf("\n입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n", id, pass);
}