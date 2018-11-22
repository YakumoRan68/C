#include <stdio.h>  
main()
{
	int numArray[2][3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
		16,17,18,19,20,21,22,23,24 };
	int *p, k, i, j;
	p = &numArray[0][0][0];
	printf("포인터연산에 의한 순서 적용\n");
	for (k = 0; k<24; k++)
		printf("%2d ", *p++);
	printf("\n");
	printf("정해진 배열 순서 적용\n");
	for (i = 0; i<2; i++)
		for (j = 0; j<3; j++)
			for (k = 0; k<4; k++)
				printf("%2d ", numArray[i][j][k]);
	printf("\n");
	printf("잘못된 배열 순서 적용\n");
	for (k = 0; k<4; k++)
		for (i = 0; i<2; i++)
			for (j = 0; j<3; j++)
				printf("%2d ", numArray[i][j][k]);
	printf("\n");
}
