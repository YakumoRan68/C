#include "data.h"

int StringCompare(const char* s1, const char* s2) { //0 : 같음, 1 : s1가 더 큼, 2 : s2가 더 큼
	int i = 0;

	while (1) {
		if (s1[i] == '\0' && s2[i] == '\0')	return 0;

		if (s1[i] > s2[i]) return 1;
		else if (s1[i] < s2[i]) return 2;
		i++;
	}
}

void compare() {
	printf("%d", StringCompare("BABA", "BAB"));
}