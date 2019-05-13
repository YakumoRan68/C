#include <stdio.h>

int fibo(int n) {
	int f0 = 1, f1 = 1, f2 = 0;
	for (int i = 0; i < n - 2; i++) {
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
	}

	return f2;
}

int Fibo(int n) {
	if (n == 1 || n == 2) return 1;
	else return fibo(n - 1) + fibo(n - 2);
}

int arr[47] = { 0, }; //fibo(47) < 2^32 < fibo(48)
int Fibo2(int n) {
	if (arr[n] != 0) return arr[n];
	else {
		if (n == 1 || n == 2) arr[n] = 1;
		else arr[n] = Fibo2(n - 1) + Fibo2(n - 2);
		return Fibo2(n);
	}
}

void main() {
	int num = 0;

	printf("Input number : ");
	scanf_s("%d", &num);

	printf("\nFibo %d = %u\n", num, Fibo2(num));
}