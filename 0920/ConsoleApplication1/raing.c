#include <stdio.h>
#include <stdlib.h>

struct movie {
	char title[100];
	double rating;
};

main() {
	struct movie *ptr;
	int i, n;

	printf("��ȭ�� ���� : ");
	scanf("%d", &n);

	ptr = (struct movie*) malloc(n * sizeof(struct movie));
	if (ptr == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	for (i = 0; i < n; i++) {
		printf("��ȭ ���� : ");
		scanf("%s", ptr[i].title);
		printf("��ȭ ���� : ");
		scanf("%lf", &ptr[i].rating);
	}

	printf("\n=======================\n");
	for (i = 0; i < n; i++) {
		printf("��ȭ ���� : %s\n", ptr[i].title);
		printf("��ȭ ���� : %lf\n", ptr[i].rating);
	}
	printf("\n=======================\n");
	free(ptr);
}