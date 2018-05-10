#include <stdio.h>
int compute_sum(int n);

main() {
	int sum = compute_sum(100);
	printf("1부터 100까지의 합 = %d \n", sum);
}

int compute_sum(int n) {
	int i, result = 0;

	for (i = 1; i <= n; i++) result += i;

	return result;
}