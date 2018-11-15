#include <stdio.h>   // printf()

void main()
{
	void backOrder(char line[], int index);
	char line[] = "ABC";
	int index = 0;

	backOrder(line, index);
}

void backOrder(char line[], int index)
{
	if (line[index] != '\0')
		backOrder(line, index + 1);
	printf("%c", line[index]);
}
