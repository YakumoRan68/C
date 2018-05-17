#include <windows.h>
#include <stdio.h>
HDC hdc;

void draw_circle(int x, int y, double radius) {
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);

	if (radius > 2.0) {
		radius *= 0.75;
		draw_circle(x, y, radius);
	}
}

int main(void) {
	hdc = GetWindowDC(GetForegroundWindow());
	draw_circle(300, 200, 200.0);
}