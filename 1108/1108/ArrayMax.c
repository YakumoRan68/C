/* findArrayMax.c */
#include <stdio.h>    

void main()
{
	int nMaxNum(int a[], int n);
	int nMaxNum2(int a[], int n);
	int aNum[100], num, k = 0;
	do {
		printf("aNum[%2d]=?(������ ������ 0) ", k);
		scanf("%d", &num);
		aNum[k++] = num;
	} while (num != 0);
	k--;
	printf("nMaxNum()=%d, nMaxNum2()=%d\n",
		nMaxNum(aNum, k), nMaxNum2(aNum, k));
}

/* funMaxNum.c
�迭�� �ִ밪 �Լ�
*/

int nMaxNum(int  a[], int  n)
{
	int max, k;

	max = a[0];
	for (k = 1; k<n; k++)
		if (a[k] > max) max = a[k];
	return max;
}

/* funMaxNum2.c
�迭�� �ִ밪 �Լ�
*/

int nMaxNum2(int *a, int  n)
{
	int m, k;

	m = 0;
	for (k = 1; k<n; k++)
		if (a[k] > a[m]) m = k;
	return a[m];
}
