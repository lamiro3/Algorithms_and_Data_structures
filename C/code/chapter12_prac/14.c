#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char txt[80];
	char words[20][20];
	char tgt[100];
	char rpl[100];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(txt, 80);

	printf("ã�� ���ڿ�: ");
	gets_s(tgt, 100);

	printf("�ٲ� ���ڿ�: ");
	gets_s(rpl, 100);
	
	char* token = strtok(txt, " ");
	strcpy(words[0], token);

	for (int i = 1; token != NULL; i++) {
		token = strtok(NULL, " ");
		strcpy(words[i], token);
	}

	for (int i = 0; words[i] != "\0"; i++) {
		if (strcmp(words[i], tgt) == 0)
			strcpy(words[i], rpl);

		printf("%s ", words[i]);
	}

	return 0;
}