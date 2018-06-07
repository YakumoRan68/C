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

	printf("왼쪽 상단의 좌표를 입력하시오 : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 상단의 좌표를 입력하시오 : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	int w = r.p2.x - r.p1.x;
	int h = r.p2.x - r.p1.x;

	int area = w*h;
	int peri = 2 * w + 2 * h;
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);
}