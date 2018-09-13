#include <stdio.h>

main() {
	FILE *fp;

	fp = fopen("sales.txt", "a");
	fprintf(fp, "2017.3.1 ∏≈√‚ : %d\n", 200000);

	fclose(fp);
}