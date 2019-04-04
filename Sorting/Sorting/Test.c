#include "lib.h"

void Test() {
	for (int i = 0; i < 1000; i++) {
		GenerateArray(ARRAYSIZE);
		//PrintArray(GenerateArray(ARRAYSIZE));
	}
}