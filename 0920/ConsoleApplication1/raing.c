#include <stdio.h>
#include <stdlib.h>

struct movie {
	char title[100];
	double rating;
};

main() {
	struct movie *ptr;
	int i, n;

	printf("영화의 개수 : ");
	scanf("%d", &n);

	ptr = (struct movie*) malloc(n * sizeof(struct movie));
	if (ptr == NULL) {
		printf("메모리 할당 오류\n");
		exit(1);
	}

	for (i = 0; i < n; i++) {
		printf("영화 제목 : ");
		scanf("%s", ptr[i].title);
		printf("영화 평점 : ");
		scanf("%lf", &ptr[i].rating);
	}

	printf("\n=======================\n");
	for (i = 0; i < n; i++) {
		printf("영화 제목 : %s\n", ptr[i].title);
		printf("영화 평점 : %lf\n", ptr[i].rating);
	}
	printf("\n=======================\n");
	free(ptr);
}