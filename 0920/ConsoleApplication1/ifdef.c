#include <stdio.h>

#define DEBUG
#define PI 3.1415
#define CIRCLE_AREA(r) (PI*(r)*(r))

main() {
	double radius, area;

#ifdef DEBUG
	printf("����� ����Դϴ�.\n");
#endif

	printf("���� ������ : ");
	scanf("%lf", &radius);
	area = CIRCLE_AREA(radius);
	printf("���� ���� = %.2f\n", area);
}