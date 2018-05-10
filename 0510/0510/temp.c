#include <stdio.h>
double FtoC(double a);

main() {
	double c, f;
	f = 33.0;
	c = FtoC(f);
	printf("화씨온도 %f는 섭시온도 %f에 해당한다.\n", f, c);
}

double FtoC(double a) {
	double b = (5.0 * (a - 32.0)) / 9.0;
	return b;
}
