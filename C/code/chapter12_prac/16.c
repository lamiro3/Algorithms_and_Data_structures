#include <stdio.h>
#include <string.h>
#include <ctype.h>

void move(char* txt, int len);

int main(void) {
	char txt[100];

	printf("광고하고 싶은 텍스트를 입력하시오: ");
	gets_s(txt, 100);
	int len = strlen(txt);

	printf("=========================\n");
	printf("%s\n", txt);

	for (int i = 0; i<len; i++) {
		move(txt, len);
	}

	return 0;
}

void move(char* txt, int len) {
	char* first;
	char tf = '\0';

	for (int i = 1; i<len; i++) {
		if (i == 1) {
			first = txt;
			tf = *first;
		}
		txt[i - 1] = txt[i];
	}

	txt[len - 1] = tf;

	printf("%s\n", txt);
}