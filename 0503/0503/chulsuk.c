#include <stdio.h>
#define size 16

int main(void) {
	int att_book[size] = { 0 };
	int i, count = 0;

	for (i = 0; i < size; i++) {
		printf("%d번째 강의에 출석하셨나요(출석은 1, 결석은 0) : ", i + 1);
		scanf("%d", &att_book[i]);
	}

	for (i = 0; i < size; i++) {
		if (att_book[i] == 0) count++;
	}

	double ratio = 1 - count / 16.0; //출석률
	if (ratio < 0.3) printf("수업 일수 부족입니다 (%f%%). \n", ratio*100.0);

}