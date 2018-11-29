#include <stdio.h>    
#include <stdlib.h>   

#include "employee.h"

void main()
{
	FILE *fp;
	char *fileName = "employee.txt";
	int  size, rp;
	long offset;
	EmployeeType rec;
	char cr;

	size = sizeof(EmployeeType);
	fp = fopen(fileName, "rb");
	if (fp == NULL)
	{
		printf("File failed to open\n");
		exit(1);
	}
	#pragma once

	printf("���    ����   �μ�   ���� �Ի��� \n");
	offset = 0L;
	fseek(fp, offset, SEEK_SET);
	while (fread(&rec, size, 1, fp) != 0) // ���� ���̳� �б⿡�� �ƴ� ����
	{
		rec.empNum[EMP1] = '\0';
		rec.empName[EMP2] = '\0';
		rec.empDept[EMP3] = '\0';
		rec.empPos[EMP4] = '\0';
		cr = rec.empDate[EMP5];
		rec.empDate[EMP5] = '\0';
		printf("%-8s%-7s%-7s%-5s%-9s%02X%02X\n", rec.empNum, rec.empName,
			rec.empDept, rec.empPos, rec.empDate, cr, rec.nl);
		offset += (long)size;
		fseek(fp, offset, SEEK_SET);
	}
	fclose(fp);
}
