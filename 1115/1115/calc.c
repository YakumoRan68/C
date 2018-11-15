#include <stdio.h>    

void main()
{
	void printMonth(int year, int month);
	int  year, month;

	do {
		printf("년도와 월을 공백으로 구분하여 입력하시오.[YYYY MM]? ");
		scanf("%d %d", &year, &month);
	} while ((year<1 || month < 1 || month > 12));
	printf("\n\n\t\t %d 년  %d 월\n\n", year, month);
	printMonth(year, month);
}
/* funPrintMonth.c */

#include <stdio.h>   
#define MROW  6
#define MCOL  7
#define SPACE ' '

void printMonth(int year, int month)
{
	int totalDays(int year, int month);
	int curMonDays(int year, int month);
	char mdayTab[MROW][MCOL];
	int  r, c, monDays, tdays, start;

	for (r = 0; r<MROW; r++)
		for (c = 0; c<MCOL; c++)
			mdayTab[r][c] = SPACE;
	tdays = totalDays(year, month);
	start = (tdays + 1) % 7;         // 해당월 1일의 요일 : 0이면 일요일, 1이면 월요일
	monDays = curMonDays(year, month);

	for (r = 1; r <= monDays; r++)
		mdayTab[start / 7][start++ % 7] = r;

	printf("\tSUN MON TUE WED THU FRI SAT\n");
	for (r = 0; r<MROW; r++)
	{
		printf("\t");
		for (c = 0; c<MCOL; c++)
			if (mdayTab[r][c] == SPACE)
				printf("%3c ", mdayTab[r][c]);
			else
				printf("%3d ", mdayTab[r][c]);
		printf("\n");
	}
}

int totalDays(int year, int month)
{
	char mDays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int  leap, k, tdays, pyear;

	// 년도가 4의 배수이면서 100의 배수가 아니거나 400의 배수이면 윤년임
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	if (leap) mDays[2] = 29;                               // 윤년이면 2월이 29일
	pyear = year - 1;
	tdays = 365 * pyear + pyear / 4 - pyear / 100 + pyear / 400;
	for (k = 1; k<month; k++)
		tdays += mDays[k];
	return tdays;
}

int curMonDays(int year, int month)
{
	char mDays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int  leap;

	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	if (leap) mDays[2] = 29;
	return mDays[month];
}

