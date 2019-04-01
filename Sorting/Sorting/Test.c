#include "lib.h"

main() {
	for (int i = 0; i < 1000; i++) {
		PrintArray(GenerateRandomArray(ARRAYSIZE));
	}

	ShowElapsed();
	EndMain();
}