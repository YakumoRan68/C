#include <stdio.h>

main() {
	int i;
	char menu[5][10] = {
		"init", "open", "close", "read", "write"
	};

	for (i = 0; i < 5; i++) printf("%d��° �޴� : %s\n", i+1, menu[i]);
}