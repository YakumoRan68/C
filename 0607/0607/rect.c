#include <stdio.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

main() {
	struct rect r;

	printf("���� ����� ��ǥ�� �Է��Ͻÿ� : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("������ ����� ��ǥ�� �Է��Ͻÿ� : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	int w = r.p2.x - r.p1.x;
	int h = r.p2.x - r.p1.x;

	int area = w*h;
	int peri = 2 * w + 2 * h;
	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);
}