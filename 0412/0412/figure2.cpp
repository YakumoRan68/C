#include <stdio.h>
#include <conio.h>
#include <windows.h>
// ���Ʒ��� �߰��غ���
void draw(int x) {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	//(HBRUSH)GetStockObject(HOLLOW_BRUSH);
	Rectangle(hdc, 0, 0, 800, 800); // ȭ������� + �Ͼ����
	system("cls");
	Rectangle(hdc, x, 100, x + 100, 200);
}

void main() {
	
	char command;
	int x = 100;
	draw(x);
	
	do {
		printf("��ɾ �Է��Ͽ� �簢���� �����̽ʽÿ� (l �Ǵ� r) : ");
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
			printf("�߸��� ��ɾ��Դϴ�.\n");
		}
	}
	while (command != 'q');
		
}
