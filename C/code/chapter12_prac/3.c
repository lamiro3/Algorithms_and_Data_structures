#include <stdio.h>

int str_chr(char* s, int c);

int main(void) {
	char s[100];
	int c;

	printf("문자열을 입력하시오: ");
	gets_s(s, 100);

	printf("개수를 셀 문자를 입력하시오: ");
	c = getchar();
	
	printf("%c의 개수: %d", c, str_chr(s, c));

	return 0;
}

int str_chr(char* s, int c) {
	int cnt = 0;

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == c)
			cnt++;
	}

	return cnt;
}