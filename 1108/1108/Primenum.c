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

int primeNum(int num)      // 반환값이 1이면 소수, 0이면 소수 아님
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

/*   등차수열의 합 구하는 함수 */

int sumAp(int a1, int d, int n)  // 초기값(초항), 증가값(공차), 한계값(말항)
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

