#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int number;
	char name[10];
	double grade;
};

main() {
	struct student s;

	s.number = 2017001;
	strcpy(s.name, "홍길동");
	s.grade = 4.3;

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %f\n", s.grade);
}