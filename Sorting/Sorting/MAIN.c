#include "lib.h"

//����(��ȯ/����) ������ �� ���̷��� lib.h���� SHOW_PROGRESS�� FALSE�� �ٲ��ּ���.
//������� ���� �˰����� �ݺ��� ������ �ش� �ҽ����Ͽ� �ֽ��ϴ�.(�빮�� �Լ��� �����, �ҹ��� �Լ��� �ݺ���)

//TODO : �迭 1���� ���� �ð� ��ġ��ŷ(�޸� 100�� ���)

void main() {
	int* ToSort = GenerateArray(ARRAYSIZE);

	printf("\n");
	PrintLineWithName("���� �� �迭");
	PrintArray(ToSort);
#if SHOW_PROGRESS
	PrintLineWithName("==�������==");
#else
	PrintLine();
#endif

	//Bubble(ToSort);
	//Heap(ToSort);
	//Insertion(ToSort);
	//Merge(ToSort);
	//Quick(ToSort);
	//Selection(ToSort);
	Test();

	PrintLineWithName("���� �� �迭");
	PrintArray(ToSort);
	PrintLine();
	ShowState();

	free(array);
	getchar();
}