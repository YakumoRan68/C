#include <windows.h>
#include <math.h>
#include <stdio.h>

double deg_to_rad(int degree) {
	return 3.141592 * degree / 180.0;
}

int main(void) {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	int i;

	MoveToEx(hdc, 0, 200, NULL);
	LineTo(hdc, 600, 200);
	for (i = 0; i < 360; i++) {
		double value = sin(deg_to_rad(i));
		SetPixel(hdc, i, 200 - value * 100, RGB(255, 255, 255));
		Sleep(5);
	}
}