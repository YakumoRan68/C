#include "lib.h"

void Linear() {
	for (int i = 0; i < ARRAYSIZE; i++)
		if (array[i] == search) {
			result = i;
			return;
		}
}