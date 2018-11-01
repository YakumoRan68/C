#include <stdio.h>
#include <stdlib.h>

void main() {
	int iMoney, money[7], moneyCnt[7], k, temp;

	money[0] = 10000; money[1] = 5000; money[2] = 1000;
	money[3] = 500; money[4] = 100; money[5] = 10; money[6] = 1;
	printf("금액을 입력하세요...? ");
	scanf("%d", &iMoney);
	temp = iMoney;
	for (k = 0; k < 7; k++) {
		moneyCnt[k] = temp / money[k];
		temp %= money[k];
	}
	for (k = 0; k < 7; k++) printf("%d원 권 = = > %d\n", money[k], moneyCnt[k]);
}