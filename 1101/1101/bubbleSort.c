#include <stdio.h>
#define n 5

void main() {
	int a[n] = {33, 54, 77, 25, 12};
	int i, j, t;

	for (j = 0; j < n; j++) printf("%d ", a[j]);
	printf("\n");
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++)
			if (a[i] > a[j]) {
				t = a[i]; a[i] = a[j]; a[j] = t;
			}
		for (j = 0; j < n; j++) printf("%d ", a[j]);
		printf("\n");
	}
}
