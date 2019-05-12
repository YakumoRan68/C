#include "lib.h"

void main() {
	GenerateArray();

	printf("찾고 싶은 숫자 : ");
	scanf_s("%d", &search);

	//Linear();
	//Binary();
	TreeBinary();

	switch (result) {
		case -1: printf("해당 수를 찾을 수 없습니다."); break;
		case -2: printf("해당 수를 찾았습니다."); break; // 트리구조에서 값을 찾았을 경우.(위치 정보가 없음)
		default: printf("해당 값은 %d번째에 있습니다.", result);
	}

	free(array);
	getch();
}