#include <stdio.h>
#include <ctype.h>

void str_upper(char* s);

int main(void) {
	char s[100];

	printf("문자열을 입력하시오: ");
	gets_s(s, 100);
	str_upper(s);

	printf("변환된 문자열: ");
	for (int i = 0; s[i] != '\0'; i++) {
		printf("%c", s[i]);
	}
	return 0;
}

void str_upper(char* s) {

	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toupper(s[i]);
	}
}