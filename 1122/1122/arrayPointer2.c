/* arrayPointer.c */
#include <stdio.h>    

main()
{
	int a[4] = { 0, 1,  2,  3 };
	int b[3][4] = { 0, 1,  2,  3, 4, 5,  6,  7, 8, 9, 10, 11 };
	char str[8] = { 'H', 'i', ',', ' ', 'M', 'o', 'm', '\0' };
	int  *ip, j, k;
	char *cp;

	ip = a;
	for (k = 0; k<4; k++)
		printf("ip[%1d]=%1d =%1d =%1d ", k, *(ip + k), ip[k], *(a + k), a[k]);
	printf("\n\n");
	ip = b;
	for (j = 0; j<3; j++)
	{
		for (k = 0; k<4; k++)
			printf("b[%1d][%1d]ip[%2d]=%2d=%2d ", j, k, 4 * j + k, *(*(b + j) + k), ip[4 * j + k]);
		printf("\n");
	}
	printf("\n");

	cp = str;
	for (k = 0; k<8; k++)
		printf("str[%1d]=%1c=%1c=%1c ", k, *(cp + k), cp[k], *(str + k), str[k]);
	printf("\n\n");
}
