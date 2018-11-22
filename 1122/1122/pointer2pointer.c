/* pointer2pointer.c */
#include <stdio.h>
void main()
{
	char *sWName[] = { "Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday", "Friday", "Saturday", "" };
	char *cp, **cpp;
	int  k;

	cpp = sWName;
	for (k = 0; k<7; k++)
		printf("%s %s\n", sWName[k], *(cpp + k));

	while (**cpp != '\0')
	{
		printf("%s ", *cpp);
		cp = *cpp++;
		while (*cp != '\0')
			printf("%c ", *cp++);
		printf("\n");
	}
}
