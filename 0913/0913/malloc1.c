#include <stdio.h>
#include <stdlib.h>

main() {
	char *pc;

	pc = (char *)malloc(1 * sizeof(char));
	if (pc == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	*pc = 'a';
	printf("%c \n", *pc);
	free(pc);
}