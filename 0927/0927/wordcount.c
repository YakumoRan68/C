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
	char *words[WORD_MAX], tWord[30]; //단어 배열, 입력단어 버퍼
	int wordNum[WORD_MAX], amountOfWord, charNum, c, k; // 단어별 개수, 단어 수, 문자 수, 입력 문자, 인덱스
	enum { OUT, IN } wordIO; //OUT = 0; IN = 1;

	printf("입력 파일명 입력 : ");
	gets(filename);

	if ((fp = fopen(filename, "r")) == NULL) {
		printf("%s을 열 수 없으므로 키보드(stdin)에서 문장을 입력하세요.\n", filename);
		fp = stdin; // 파일 포인터를 표준 입력장치(stdin)로 정한다.
	}

	for (k = 0; k < WORD_MAX; k++) wordNum[k] = 0;
	amountOfWord = charNum = 0;

	do {
		c = getc(fp);
		if (c == BLANK || c == NEW_LINE || c == TAB || c == EOF) {
			if (charNum > 0) {
				tWord[charNum] = '\0'; //입력 단어 끝에 '\n'을 넣어 문자열로 만든다.
				wordIO = OUT; // 입력 단어가 단어 배열에 없는 것으로 지정한다.
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