#define EMP1 7  // ���
#define EMP2 6  // ����
#define EMP3 6  // �μ�
#define EMP4 4  // ����
#define EMP5 8  // �Ի���

typedef struct {
	char empNum[EMP1 + 1];
	char empName[EMP2 + 1];
	char empDept[EMP3 + 1];
	char empPos[EMP4 + 1];
	char empDate[EMP5 + 1];
	char nl;
} EmployeeType;
#pragma once
