#include <stdio.h>

void sub(void) {
	int auto_count = 0;
	static int static_count = 0; //�ѹ��� �ʱ�ȭ �ȴ�

	auto_count++;
	static_count++;
	printf("auto_count = %d\n", auto_count);
	printf("static_count = %d\n", static_count);
}

int main() {
	sub();
	sub();
	sub();
}