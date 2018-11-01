#include <stdio.h>
#define CR 13
#define LF 10
#define ESC 27
#define PRINT_LINE(line) printf("%s\n", line)

void main() {
	char c;
	char *hLine = "-----------------------------------";

	printf("Input any characters, Press ESC to exit.\n");
	PRINT_LINE(hLine);
	while ((c = getch()) != ESC) {
		putchar(c);
		if (c == CR) putchar(LF);
	}

	printf("\n"); PRINT_LINE(hLine);
}