#include <stdio.h>
#define NATTON 3

main() {
	#if NATTON == 1
		printf("�ȳ��ϼ���?");
	#elif NATTON == 2
		printf("2");
	#elif NATTON == 3
		printf("Hello World!");
	#endif
}