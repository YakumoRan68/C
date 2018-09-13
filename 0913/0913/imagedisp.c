#include <windows.h>
#include <stdio.h>

main() {
	HDC hdc = GetWindowDC(GetForegroundWindow());

	FILE *fp = fopen("lena.raw", "rb");
	if (fp == NULL) {
		printf("lena.raw 파일을 열 수 없습니다.");
		exit(1);
	}
	char image[512][512];
	fread(image, 1, 512 * 512, fp);
	fclose(fp);

	int r, c;
	for (r = 0; r < 512; r++) {
		for (c = 0; c < 512; c++) {
			int red = image[r][c];
			int green = image[r][c];
			int blue = image[r][c];
			SetPixel(hdc, c, r, RGB(red, green, blue));
		}
	}
}