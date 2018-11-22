#include <stdio.h>  

main()
{
	int a[4] = { 0, 1,  2,  3 };
	int b[3][4] = { 0, 1,  2,  3, 4, 5,  6,  7, 8, 9, 10, 11 };
	char str[8] = { 'H', 'i', ',', ' ', 'M', 'o', 'm', '\0' };
	char s[7][10] = { "Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday", "Friday", "Saturday" };
	int numA[2][3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
		16,17,18,19,20,21,22,23,24 };
	int *p, *ip, i, j, k;
	char *cp;

	ip = &a[0];
	for (k = 0; k<4; k++)
		printf("a[%1d]=%2d  ", k, *ip++);
	printf("\n\n");
	ip = &b[0][0];
	for (j = 0; j<3; j++)
	{
		for (k = 0; k<4; k++)
			printf("b[%1d][%1d]=%2d  ", j, k, *ip++);
		printf("\n");
	}
	printf("\n");

	cp = &str[0];
	for (k = 0; k<8; k++)
		printf("str[%1d]=%1c ", k, *cp++);
	printf("\n\n");

	cp = &s[0][0];
	for (j = 0; j<7; j++)
	{
		printf("s[%d]=%s \t", j, cp);
		for (k = 0; k<10; k++)
			printf("s%1d%1d=%1c ", j, k, *cp++);
		printf("\n");
	}
	printf("\n");
	ip = &numA[0][0][0];
	for (i = 0; i<2; i++)
	{
		for (j = 0; j<3; j++)
		{
			for (k = 0; k<4; k++)
				printf("numA[%1d][%1d][%1d]=%2d ", i, j, k, *ip++);
			printf("\n");
		}
		printf("\n");
	}
}
