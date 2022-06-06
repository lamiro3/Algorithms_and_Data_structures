#include <stdio.h>
#include <ctype.h>

void check_first(char* txt);
void check_last(char* txt);

int main(void) {
	char txt[100];
	printf("텍스트를 입력하시오:");
	gets_s(txt, 100); // 한 줄의 문자열 read
	check_first(txt);
	check_last(txt);

	printf("수정된 텍스트:");
	puts(txt); // 한 줄의 문자열을 print

	return 0;
}

void check_first(char* txt) {
	if (islower(txt[0]))
		txt[0] = toupper(txt[0]);
}

void check_last(char* txt) {
	int last_idx = 0;
	
	for (int i = 0; txt[i] != '\0'; i++) {
		last_idx = i;
	}

	if (txt[last_idx] != '.') {
		txt[last_idx + 1] = '.';
		txt[last_idx + 2] = '\0'; // 문자열의 끝임을 알려줘야 함
	}
}