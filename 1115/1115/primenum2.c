#include <stdio.h>   // printf()
#include <math.h>  // sqrt()
void main()
{
	int num, r, sw;
	scanf("%d", &num);
	sw = 0; r = 1;

	do {
		r++;
		if (r > sqrt(num)) sw = 1;
	} while (num%r != 0 && sw == 0);
	if (sw == 1)
		printf("%d : �Ҽ�\n", num);
	else
		printf("%d : �Ҽ��ƴ�\n", num);
}
