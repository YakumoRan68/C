#include <stdio.h>
#include <conio.h>
#include <windows.h>
// 위아래도 추가해보자
void draw(int x) {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	//(HBRUSH)GetStockObject(HOLLOW_BRUSH);
	Rectangle(hdc, 0, 0, 800, 800); // 화면지우기 + 하얗게함
	system("cls");
	Rectangle(hdc, x, 100, x + 100, 200);
}

void main() {
	
	char command;
	int x = 100;
	draw(x);
	
	do {
		printf("명령어를 입력하여 사각형을 움직이십시오 (l 또는 r) : ");
		command = _getch();
		if (command == 'l') {
			if (x == 0) {
				draw(x);
				continue;
			}
			x -= 100;
			draw(x);
		}
		else if (command == 'r') {
			if (x == 600) {
				draw(x);
				continue;
			}
			x += 100;
			draw(x);
		}
		else if (command == 'q') {
			system("cls");
			break;
		}
		else {
			system("cls");
			printf("잘못된 명령어입니다.\n");
		}
	}
	while (command != 'q');
		
}
