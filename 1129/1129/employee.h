#define EMP1 7  // 사번
#define EMP2 6  // 성명
#define EMP3 6  // 부서
#define EMP4 4  // 직위
#define EMP5 8  // 입사일

typedef struct {
	char empNum[EMP1 + 1];
	char empName[EMP2 + 1];
	char empDept[EMP3 + 1];
	char empPos[EMP4 + 1];
	char empDate[EMP5 + 1];
	char nl;
} EmployeeType;
#pragma once
