#include "lib.h"

main() {
	GenerateArray();

	printf("찾고 싶은 숫자 : ");
	scanf_s("%d", &search);

	//Linear();
	Binary();

	result == -1 ? printf("해당 수를 찾을 수 없습니다.") : printf("해당 수는 %d번째에 있습니다.", result);

	free(array);
	getch();
}