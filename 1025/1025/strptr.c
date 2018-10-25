#include <stdio.h>   // gets(), puts()
#include <stdlib.h>  // malloc()
#define SIZE 80

void main() {
	char *prompt, *msg;

	prompt = "문자열을 입력하시오.\n"; 
	puts(prompt);

	msg = (char *)malloc(SIZE);
	if (gets(msg) != NULL && strlen(msg) <= SIZE) {
		printf("입력된 문자열 : ");
		puts(msg);
	}
	free(msg);
}