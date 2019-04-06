#include "lib.h"

void Test() {
	for (int i = 0; i < 1000; i++) {
		GenerateArray(ARRAYSIZE);
	}
	int STACK[10] = { 0,1,2,3,4,5,6,7,8,9 }, i = 1;
	STACK[i], STACK[i] = -1, -2;
	printf("i = %d\n", i);
	
	for (int i = 0; i < 10; i++) printf("%3d", STACK[i]);
}