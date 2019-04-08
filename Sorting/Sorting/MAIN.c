#include "lib.h"

//연산(교환/분할) 과정을 안 보이려면 lib.h에서 SHOW_PROGRESS를 FALSE로 바꿔주세요.
//재귀적인 정렬 알고리즘의 반복문 버전은 해당 소스파일에 있습니다.(대문자 함수는 재귀적, 소문자 함수는 반복문)

//TODO : 배열 1만개 정렬 시간 벤치마킹(메모리 100개 사용)

void main() {
	int* ToSort = GenerateArray(ARRAYSIZE);

	printf("\n");
	PrintLineWithName("정렬 할 배열");
	PrintArray(ToSort);
#if SHOW_PROGRESS
	PrintLineWithName("==연산과정==");
#else
	PrintLine();
#endif

	//Bubble(ToSort);
	Heap(ToSort);
	//Insertion(ToSort);
	//Merge(ToSort);
	//Quick(ToSort);
	//Selection(ToSort);
	//Test();

	PrintLineWithName("정렬 된 배열");
	PrintArray(ToSort);
	PrintLine();
	ShowState();

	free(array);
	getchar();
}