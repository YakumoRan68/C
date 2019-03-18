#pragma once

int swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

extern int swap(int *a, int *b);
extern int sample_1[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
extern int sample_2[10] = { 2, 4, 6, 8, 10, 9, 7 ,5, 3, 1 };
extern int sample_3[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
extern int sample_4[10] = { 9, 7, 5, 3, 1, 10, 8, 6, 4, 2 };
extern int sample_5[10] = { 5, 1, 2, 7, 8, 9, 3, 10, 4, 6 }; // 의사 난수