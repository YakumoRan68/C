char *weekName(int num)
{
	char *swName[] = { "Week Error", "Sunday", "Monday",
		"Tuesday", "Wednesday", "Thursday","Friday","Saturday" };

	return (num < 1 || num > 7) ? swName[0] : swName[num];
}

#include <stdio.h>    
void main()
{
	char *weekName(int num);
	int k;
	for (k = 0; k<8; k++)
		printf("[%d] ==> %s\n", k, weekName(k));
}
