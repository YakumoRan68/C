#include <stdio.h>
#define SQUARE(x) ((x) * (x))
#define PRINT printf

main() {
	int x = 2;

	PRINT("SQUARE(3) = %d\n", SQUARE(3));
	PRINT("SQUARE(1.2) = %f\n", SQUARE(1.2));
	PRINT("SQUARE(2+3) = %d\n", SQUARE(2 + 3));
	PRINT("x = %d\n", x);
	PRINT("SQUARE(x) = %d\n", SQUARE((x)));
	PRINT("SQUARE(++x) = %d\n", SQUARE(++x));
}