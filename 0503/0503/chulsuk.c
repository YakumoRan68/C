#include <stdio.h>
#define size 16

int main(void) {
	int att_book[size] = { 0 };
	int i, count = 0;

	for (i = 0; i < size; i++) {
		printf("%d��° ���ǿ� �⼮�ϼ̳���(�⼮�� 1, �Ἦ�� 0) : ", i + 1);
		scanf("%d", &att_book[i]);
	}

	for (i = 0; i < size; i++) {
		if (att_book[i] == 0) count++;
	}

	double ratio = 1 - count / 16.0; //�⼮��
	if (ratio < 0.3) printf("���� �ϼ� �����Դϴ� (%f%%). \n", ratio*100.0);

}