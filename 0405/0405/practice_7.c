#include <stdio.h>
#include <math.h>

void main() {
	int x1, x2, y1, y2;
	double dis;

	printf("ù��° �� (x1, y1) : ");
	scanf_s("%d%d", &x1, &y1);
	printf("�ι�° �� (x2, y2) : ");
	scanf_s("%d%d", &x2, &y2);

	dis = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)); // sqrt : double���� ����ȯ
	printf("Distance = %lf", dis);
}