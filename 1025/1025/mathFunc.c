#include <stdio.h>    // printf()
#include <stdlib.h>   // rand()
#include <math.h>    // sqrt()
#define  Num  10      // �����Ͱ���

void main()
{
	int    k; //::indentation
	int    numDat[Num], sum = 0; // ����, ��
	double mean, var, std;         // ���, �л�, ǥ������
	double temp, tempSum;


	for (k = 0; k<Num; k++)
	{
		numDat[k] = (double)rand() / (RAND_MAX + 1) * 6 + 1;
		sum += numDat[k];
	}
	mean = (double)sum / Num;

	tempSum = 0.0;
	for (k = 0; k<Num; k++)
	{
		temp = numDat[k] - mean;
		temp = temp * temp;
		tempSum += temp;
	}
	var = tempSum / Num;
	std = sqrt(var);
	printf("��= %d, ���= %f, �л�= %f, ǥ������= %f\n", sum, mean, var, std);
}
