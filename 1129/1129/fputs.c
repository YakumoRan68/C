#include <stdio.h>   // print(), gets(), fputs()
#include <stdlib.h>  // exit()

#define LineWidth 80
#define REC_LEN   35

void main()
{
	FILE *fp;
	char oneLine[LineWidth];
	char *fileName = "employee.txt";
	int  k;

	fp = fopen(fileName, "a+");
	if (fp == NULL)
	{
		printf("File failed to open\n");
		exit(1);
	}

#pragma once
	printf("사번    성명   부서   직위 입사일\n");
	printf("12345678901234567890123456789012345\n");
	printf("XXXXXXX XXXXXX XXXXXX XXXX XXXXXXXX\n");
	for (k = 0; k<3; k++)
	{
		gets(oneLine);
		oneLine[REC_LEN] = '\n';
		oneLine[REC_LEN + 1] = '\0';
		fputs(oneLine, fp);
	}
	fclose(fp);
}
