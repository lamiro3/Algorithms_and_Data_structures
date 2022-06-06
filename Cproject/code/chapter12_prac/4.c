#include <stdio.h>

int str_chr(char* s, int c) {
	int cnt = 0;

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == c)
			cnt++;
	}

	return cnt;
}

int main(void) {
	char s[100];
	printf("문자열을 입력하시오: ");
	gets_s(s, 100);

	for (int c = 97; c < 97 + 26; c++) {
		printf("%c: %d\n", c, str_chr(s, c));
	}

	return 0;
}