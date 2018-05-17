#include <stdio.h>

int main() {
	int number = 10; 
	int *p;			//* : 林家 -> 蔼
	p = &number;	//& : 蔼 -> 林家

	printf("%d\n", *p);
}