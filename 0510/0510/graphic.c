#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

void line(HDC hdc, int x1, int y1, int x2, int y2) {
	MoveToEx(hdc, x1, y1, NULL);
	LineTo(hdc, x2, y2);
}

int randint(int x1, int x2) {
	return x1 + rand() % (x2 - x1);
}

main() {
	int i;
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Rectangle(hdc, 0, 100, 0, 160);
	for (i = 0; i < 30; i++) {
		int x1 = randint(0, 300);
		int x2 = randint(0, 300);
		int y1 = randint(0, 300);
		int y2 = randint(0, 300);
		line(hdc, x1, y1, x2, y2);
		Sleep(100);
	}
}