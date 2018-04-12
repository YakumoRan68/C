#include <stdio.h>

void swap(int *a, int *b) { //스왑
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void main() {
	int a, b, r;

	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d%d", &a, &b);

	if (a < b) swap(&a, &b); // 큰수a 작은수b
	
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	printf("최대 공약수는 : %d\n", a);
}