#include <stdio.h>   // printf()
int sum;
static int number = 10;
double average(int number)
{
	double ave;

	ave = (double)total(number) / (double)number;
	return ave;
}
void main()
{
	double ave;

	ave = average(number);
	printf("1~%d������ ��� = %f\n", number, ave);
	printf("1~%d������ �� = %d\n", ++number, total(number));
}

int total(int number)
{
	static int k = 1;
	while (k <= number)
	{
		sum += k; k++;
	}
	return sum;
}
