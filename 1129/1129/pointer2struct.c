/* pointer2struct.c */
#include <stdio.h>
struct date {
	int  year;
	char month[10];
	int  day;
};
main()
{
	struct date memDate[] = {
		{ 2008, "November", 25 },
		{ 2010, "February", 5 },
		{ 2012, "January",  15 },
		{ 0, "", 0 }
	};
	struct date *ptr;

	ptr = memDate;
	while (ptr->year != 0) {
		printf("%10s %2d, %4d\n", ptr->month, ptr->day, ptr->year);
		ptr++;
	}
}
