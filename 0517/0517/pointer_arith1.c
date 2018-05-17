#include <stdio.h>

main() {
	char *pc;
	int *pi;
	double *pd;

	pc = (char *)10000;
	pi = (int *)10000;
	pd = (double *)10000;
	printf("pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++; pi++; pd++;
	printf("pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
}