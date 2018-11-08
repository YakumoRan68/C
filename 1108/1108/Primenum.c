#include <stdio.h>  
#include <math.h>     

void main()
{
	int sumAp(int a1, int d, int n);
	int primeNum(int num);
	int n, k;

	printf("n = ? "); 
	scanf("%d", &n);
	for (k = 2; k <= n; k++)
		if (primeNum(k))
			printf("1+..+%d=%d\n", k, sumAp(1, 1, k));
}

int primeNum(int num)      // ��ȯ���� 1�̸� �Ҽ�, 0�̸� �Ҽ� �ƴ�
{
	int r, sw;

	sw = 0;
	if (num <= 1) return sw;
	r = 1;
	do {
		r++;
		if (r > sqrt(num)) sw = 1;
	} while (num%r != 0 && sw == 0);
	return sw;
}

/*   ���������� �� ���ϴ� �Լ� */

int sumAp(int a1, int d, int n)  // �ʱⰪ(����), ������(����), �Ѱ谪(����)
{
	int num, sum;

	sum = 0;
	num = a1;
	while (num <= n)
	{
		sum += num;
		num += d;
	}
	return sum;
}

