#include <stdio.h>

main() {
	int *p;
	int i, items;
	printf("�׸��� ���� : ");
	scanf("%d", &items);
	p = (int*)malloc(sizeof(int)*items);

	for (i = 0; i < items; i++) {
		printf("�׸�(����)�� �Է��ϼ��� : ");
		scanf("%d", &p[i]);
	}

	printf("\n�Էµ� ���� ������ �����ϴ� : \n");
	for (i = 0; i < items; i++) printf("%d ", p[i]);
	printf("\n");
	free(p);
}