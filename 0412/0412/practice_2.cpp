#include <windows.h>
#include <stdio.h>

void main() {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	int i = 1, x = 30;
	
	while (i <= 10) {
		Rectangle(hdc, x, 100, x + 60, 160);
		x += 70;
		i++;
	}
}