/* union2.c */
#include <stdio.h>
union uNum {
	char  dec;
	struct {
		unsigned int b0 : 1;
		unsigned int b1 : 1;
		unsigned int b2 : 1;
		unsigned int b3 : 1;
	} bin;
};
main()
{
	union uNum n;

	for (n.dec = 0; n.dec < 16; n.dec++)
		printf("decimal=%2d, hexa=%2X, binary=%2d%2d%2d%2d\n",
			n.dec, n.dec, n.bin.b3, n.bin.b2, n.bin.b1, n.bin.b0);
}
