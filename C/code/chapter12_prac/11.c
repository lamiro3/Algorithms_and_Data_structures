#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int reverse(char* txt, char words[][100]) {
	char* word = strtok(txt, " ");
	int i;

	for (i = 0; words[i] != "\0"; i++) {
		if (i == 0)
			strcpy(words[i], word);

		word = strtok(NULL, " ");
		strcpy(words[i], word);
	}
	
	return i;
}

int main(void) {
	char txt[100];
	char words[100][100];

	printf("문자열을 입력하시오: ");
	gets_s(txt, 100);

	int word_num = 0;
	int cnt = reverse(txt, words);

	for (int i = 0; i < cnt + 1; i++) {
		printf("%s", words[cnt - i]);
	}

	return 0;
}