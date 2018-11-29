#include <stdio.h>
typedef struct date {
	int  year;
	char month[10];
	int  day;
} DateType;
typedef int Integer;

void main()
{
	DateType memDate[] = {
		{ 2008, "November", 25 },
		{ 2010, "February", 5 },
		{ 2012, "January",  15 },
		{ 0, "", 0 }
	};
	DateType *ptr;
	Integer count = 0;
	ptr = memDate;
	while (ptr->year != 0) {
		count++;
		printf("%d번 레코드: %10s %2d, %4d\n", count, ptr->month, ptr->day, ptr->year);
		ptr++;
	}
}
