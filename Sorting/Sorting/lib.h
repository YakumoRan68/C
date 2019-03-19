#pragma once

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printarr(int a[]) {
	for (int i = 0; i < 10; i++) printf("%d ", a[i]);
}

void printline(char *str, int SRC[]) {
	printf("%s", str);
	printarr(SRC);
	printf("\n\n");
}

int sample_1[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
int sample_2[10] = { 2, 4, 6, 8, 10, 9, 7 ,5, 3, 1 };
int sample_3[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
int sample_4[10] = { 9, 7, 5, 3, 1, 10, 8, 6, 4, 2 };
int sample_5[10] = { 5, 1, 2, 7, 8, 9, 3, 10, 4, 6 }; // 의사 난수