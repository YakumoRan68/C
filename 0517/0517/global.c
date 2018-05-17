#include <stdio.h>
#include <math.h>
#include <windows.h>

HDC hdc;

void line(int x1, int y1, int x2, int y2) {
	MoveToEx(hdc, x1, y1, NULL);
	LineTo(hdc, x2, y2);
}

int main(void) {
	int i;
	int x1 = 200;
	int y1 = 200;
	int x2 = 400;
	int y2 = 200;
	hdc = GetWindowDC(GetForegroundWindow());

	for (i = 0; i < 30; i++) {
		line(x1, y1, x2, y2);
		y1 -= 10;
		y2 += 10;
		Sleep(100);
	}
}
