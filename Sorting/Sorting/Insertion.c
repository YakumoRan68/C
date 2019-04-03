void Insertion(int* ToSort) {
	bool flag = TRUE;
	for (int i = 1; i < ARRAYSIZE; i++) {
		for (int j = i; j > 0; j--) {
			flag = TRUE;
			if (ToSort[j - 1] > ToSort[j]) {
				Swap(&ToSort[j - 1], &ToSort[j]);
				flag = FALSE;
			}
			if (flag) break;
		}
	}
}