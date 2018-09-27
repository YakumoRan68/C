#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BLANK ' '
#define NEW_LINE '\n'
#define TAB '\t'
#define WORD_MAX 1000

void main() {
	FILE *fp;
	char *filename[30];
	char *words[WORD_MAX], tWord[30]; //�ܾ� �迭, �Է´ܾ� ����
	int wordNum[WORD_MAX], amountOfWord, charNum, c, k; // �ܾ ����, �ܾ� ��, ���� ��, �Է� ����, �ε���
	enum { OUT, IN } wordIO; //OUT = 0; IN = 1;

	printf("�Է� ���ϸ� �Է� : ");
	gets(filename);

	if ((fp = fopen(filename, "r")) == NULL) {
		printf("%s�� �� �� �����Ƿ� Ű����(stdin)���� ������ �Է��ϼ���.\n", filename);
		fp = stdin; // ���� �����͸� ǥ�� �Է���ġ(stdin)�� ���Ѵ�.
	}

	for (k = 0; k < WORD_MAX; k++) wordNum[k] = 0;
	amountOfWord = charNum = 0;

	do {
		c = getc(fp);
		if (c == BLANK || c == NEW_LINE || c == TAB || c == EOF) {
			if (charNum > 0) {
				tWord[charNum] = '\0'; //�Է� �ܾ� ���� '\n'�� �־� ���ڿ��� �����.
				wordIO = OUT; // �Է� �ܾ �ܾ� �迭�� ���� ������ �����Ѵ�.
				for (k = 0; k < amountOfWord; k++) 
					if (strcmp(words[k], tWord) == 0) {
						wordIO = IN;
						wordNum[k]++;
						break;
					}
				if (wordIO == OUT) {
					words[amountOfWord] = (char *)malloc(charNum);
					strcpy(words[amountOfWord], tWord);
					wordNum[amountOfWord] = 1;
					amountOfWord++;
				}
				charNum = 0;
			}
		}
		else {
			tWord[charNum++] = c;
		}
	} while (c != EOF);
	fclose(fp);

	for (k = 0; k < amountOfWord; k++) printf("%30s[%3d] : %d\n", words[k], k, wordNum[k]);
}