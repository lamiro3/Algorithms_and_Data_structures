#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	char txt[100];
	int cnt = 0;

	printf("문자열을 입력하시오: ");
	gets_s(txt, 100);

	char* token = strtok(txt, " "); // 처음에는 반드시 이렇게!

	while (token != NULL) {
		cnt += 1;
		token = strtok(NULL, " "); // 두 번째 이상 부터는 반드시 이렇게!
	}

	printf("단어의 수는 %d입니다.", cnt);

	return 0;
}