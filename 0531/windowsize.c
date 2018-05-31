#include <stdio.h>
#include <conio.h>
#include <windows.h>

main() {
	int ch;
	int width = 200, height = 200;
	HDC hdc = GetWindowDC(GetForegroundWindow());

	while (1) {
		Rectangle(hdc, 100, 100, width, height);
		ch = getch();
		Rectangle(hdc, 0, 0, 800, 600);
		if (ch == 'b') {
			width += 10;
			height += 10;
		}
		else if (ch == 's') {
			width -= 10;
			height -= 10;
		}
		else if (ch == 'q') {
			return 0;
		}
	}
	return 0;
}