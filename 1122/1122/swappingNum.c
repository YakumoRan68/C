#include <stdio.h>   
void swapNum(int *a, int *b);
void main()
{
	int num1, num2;

	printf("input two numbers : ");
	scanf("%d %d", &num1, &num2);
	printf("num1=%d, num2=%d\n", num1, num2);
	swapNum(&num1, &num2);
	printf("num1=%d, num2=%d\n", num1, num2);
}

void swapNum(int *a, int *b) // 
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
