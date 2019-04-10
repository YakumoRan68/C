#include <stdio.h>

int abs(int x) {
	return x > 0 ? x : -x;
}

//                  조건
// 1. for문은 2개만(바깥 for문, 안쪽 for문)
// 2. 바깥쪽 for문은 무조건 i++로만
// 3. 안쪽 for문의 조건문은 무조건 1줄.
// 즉 구성이 for - for - if 만 있는 구조로만 구성됨.
// 이론상 표현하려는 것에 패턴이 있고, 2차원 평면 모양이면 for문 2개로 가능하다는 것을 증명.

void main() {
	int MAX = 3;
	//scanf_s("%d", &MAX);

	printf("1\n");

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) 
			i > j - 1 ? printf("*") : printf(" ");
		printf("\n");
	}

	printf("\n2\n");

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) 
			i < MAX - j ? printf("*") : printf(" ");
		printf("\n");
	}

	printf("\n3\n");

	for (int i = 0; i < MAX; i++) { 
		for (int j = 0; j < MAX; j++) 
			i < MAX - j - 1 ? printf(" ") : printf("*");
		printf("\n");
	}

	printf("\n4\n");

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) 
			i > j ? printf(" ") : printf("*");
		printf("\n");
	}

	printf("\n5\n");

	for (int i = 0; i < 2 * MAX - 1; i++) {
		for (int j = 0; j < MAX; j++)
			abs(MAX - i - 1) < MAX - j ? printf("*") : printf(" ");
		printf("\n");
	}

	printf("\n6\n");

	for (int i = 0; i < 2 * MAX - 1; i++) {
		for (int j = 0; j < MAX; j++)
			abs(MAX - i - 1) < j + 1? printf("*") : printf(" ");
		printf("\n");
	}

	printf("\n7\n");

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX * 2 - 1; j++)
			i < MAX - abs(MAX - j - 1) ? printf("*") : printf(" ");
		printf("\n");
	}

	printf("\n8\n");

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX * 2 - 1; j++)
			i < abs(MAX - j - 1) ? printf(" ") : printf("*");
		printf("\n");
	}

	printf("\n9\n");

	for (int i = 0; i < MAX * 2 - 1; i++) {
		for (int j = 0; j < MAX * 2 - 1; j++)
			abs(MAX - i - 1) < MAX - abs(MAX - j - 1) ? printf("*") : printf(" ");
		printf("\n");
	}

	printf("\n10\n");

	for (int i = 0; i < MAX * 2 - 1; i++) {
		for (int j = 0; j < MAX * 2 - 1; j++)
			abs(MAX - i - 1) < abs(MAX - j - 1) ? printf(" ") : printf("*");
		printf("\n");
	}

	printf("\nwindmill\n");

	//1234321
	//1230321
	//***   * (|y| % 5 >= 1, <= 1)
	// **  ** (|y|     >= 2, <= 2)
	//  * *** (|y|     >= 3, <= 3)
	//        (|y|     >= 4, <= 4)
	//  * *** (|y|     >= 3, <= 3)
	// **  ** (|y|     >= 2, <= 2)
	//***   * (|y|     >= 1, <= 1)

	for (int i = 0; i < MAX * 2 + 1; i++) {
		for (int j = 0; j < MAX * 2 + 1; j++)
			(j < MAX ? MAX - abs(MAX - i) < j % (MAX + 1) + 1  : MAX - abs(MAX - i) + 1 > MAX - abs(MAX - j) % (MAX + 1) && i != MAX) ? printf("*") : printf(" ");
		printf("\n");
	}
}