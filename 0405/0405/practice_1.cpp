#include <stdio.h>
#include <math.h>

void main() {
	int init_money = 100;
	double interest = 0.06;
	int years = 80;

	double money = init_money * pow((1.0 + interest), years);
	printf("%d�� ���� ������ = %f \n", years, money);
}