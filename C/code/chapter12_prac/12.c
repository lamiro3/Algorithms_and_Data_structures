#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char txt[100];
	char name[2][100];

	printf("성과 이름을 대문자로 입력하시오: ");
	gets_s(txt, 100);

	for (int i = 0; txt[i] != NULL; i++)
		txt[i] = tolower(txt[i]);

	char* word = strtok(txt, " ");
	strcpy(name[1], word);

	word = strtok(NULL, " ");
	strcpy(name[0], word);

	printf("%s, ", name[0]);
	printf("%s", name[1]);

	return 0;
}