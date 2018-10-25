#include <stdio.h>    // printf()
#include <stdlib.h>   // rand()
#include <math.h>    // sqrt()
#define  Num  10      // 데이터개수

void main()
{
	int    k; //::indentation
	int    numDat[Num], sum = 0; // 난수, 합
	double mean, var, std;         // 평균, 분산, 표준편차
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
	printf("합= %d, 평균= %f, 분산= %f, 표준편차= %f\n", sum, mean, var, std);
}
