#include <stdio.h>

const char* delimiters[3] = { " ", "_", "+" };

void string() {
	char* s1 = "한 글";
	char* s2 = "한 글";

	printf("%d %d", s1[3], s1[4]);
}