#include <stdio.h>   // gets(), puts()
#include <stdlib.h>  // malloc()
#define SIZE 80

void main() {
	char *prompt, *msg;

	prompt = "���ڿ��� �Է��Ͻÿ�.\n"; 
	puts(prompt);

	msg = (char *)malloc(SIZE);
	if (gets(msg) != NULL && strlen(msg) <= SIZE) {
		printf("�Էµ� ���ڿ� : ");
		puts(msg);
	}
	free(msg);
}