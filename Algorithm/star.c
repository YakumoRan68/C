#include <stdio.h>

int abs(int x) {
	return x > 0 ? x : -x;
}

//i < (MAX + 1) * MAX + 1 (+1�� \n�� �ǹ�); ���� * ���� + 1 
//i % ����
//i = i / ����
//j = i % (���� - 1) (-1 �� �࿡�� \n�� �������� �ʰ� ����ϱ� ���ؼ�) 

void main() {
	int MAX = 3;
	//scanf_s("%d", &MAX);

	printf("\n1");

	for (int i = 0; i < (MAX + 1) * MAX + 1; i++) i % (MAX + 1) ? i / (MAX + 1) + 1 > i % (MAX + 1) - 1 ? printf("*") : printf(" ") : printf("\n");
	
	printf("\n2");

	for (int i = 0; i < (MAX + 1) * MAX + 1; i++) i % (MAX + 1) ? i / (MAX + 1) < MAX + 1 - i % (MAX + 1) ? printf("*") : printf(" ") : printf("\n");

	printf("\n3");

	for (int i = 0; i < (MAX + 1) * MAX + 1; i++) i % (MAX + 1) ? i / (MAX + 1) < MAX - i % (MAX + 1) ? printf(" ") : printf("*") : printf("\n");

	printf("\n4");

	for (int i = 0; i < (MAX + 1) * MAX + 1; i++) i % (MAX + 1) ? i / (MAX + 1) > i % (MAX + 1) - 1 ? printf(" ") : printf("*") : printf("\n");
	
	printf("\n5");

	for (int i = 0; i < (MAX + 1) * (2 * MAX - 1) + 1; i++) i % (MAX + 1) ? abs(MAX - i / (MAX + 1) - 1) < MAX - i % (MAX + 1) + 1 ? printf("*") : printf(" ") : printf("\n");
	
	printf("\n6");

	for (int i = 0; i < (MAX + 1) * (2 * MAX - 1) + 1; i++) i % (MAX + 1) ? abs(MAX - i / (MAX + 1) - 1) < i % (MAX + 1) ? printf("*") : printf(" ") : printf("\n");
	
	printf("\n7");

	for (int i = 0; i < 2 * MAX * MAX + 1; i++) i % (2 * MAX) ? i / (2 * MAX) < MAX - abs(MAX - i % (2 * MAX)) ? printf("*") : printf(" ") : printf("\n");
	
	printf("\n8");

	for (int i = 0; i < 2 * MAX * MAX + 1; i++)	i % (2 * MAX) ? i / (2 * MAX) < abs(MAX - i % (2 * MAX)) ? printf(" ") : printf("*") : printf("\n");

	printf("\n9");

	for (int i = 0; i < (MAX * 2) * (MAX * 2 - 1); i++) i % (2 * MAX) ? abs(MAX - i / (2 * MAX) - 1) < MAX - abs(MAX - i % (2 * MAX)) ? printf("*") : printf(" ") : printf("\n");
	
	printf("\n10");

	for (int i = 0; i < (MAX * 2) * (MAX * 2 - 1); i++) i % (2 * MAX) ? abs(MAX - i / (2 * MAX) - 1) < abs(MAX - i % (2 * MAX)) ? printf(" ") : printf("*") : printf("\n");

	printf("\nwindmill");

	//1234321
	//1230321
	//***   * (|y| % 4 >= 1, <= 1)
	// **  ** (|y|     >= 2, <= 2)
	//  * *** (|y|     >= 3, <= 3)
	//        (|y|     >= 4, <= 4)
	//  * *** (|y|     >= 3, <= 3)
	// **  ** (|y|     >= 2, <= 2)
	//***   * (|y|     >= 1, <= 1)

	//(j < MAX ? MAX - abs(MAX - i) < j % (MAX + 1) + 1 : 
	//MAX - abs(MAX - i) + 1 > MAX - abs(MAX - j) % (MAX + 1) && i != MAX) ? printf("*") : printf(" ");
	for (int i = 0; i < (MAX * 2 + 2) * (MAX * 2 + 1) + 1; i++)
		i % (MAX * 2 + 2) ?
		(i % (MAX * 2 + 2) -1 < MAX ? MAX - abs(MAX - i / (MAX * 2 + 2)) < i % (MAX * 2 + 2) % (MAX + 1) 
		: MAX - abs(MAX - i / (MAX * 2 + 2)) + 1 > MAX - abs(MAX - i % (MAX * 2 + 2) + 1) % (MAX + 1) && i / (MAX * 2 + 2) != MAX) ? printf("*") : printf(" ") : printf("\n");
}