#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_pali(char* txt);

int main(void) {
	char txt[100];

	printf("문자열을 입력하시오: ");
	gets_s(txt, 100);

	if (is_pali(txt) == 1)
		printf("회문입니다.");
	else
		printf("회문이 아닙니다.");

	return 0;
}

int is_pali(char* txt) {
	for (int i = 0; i < (int)(strlen(txt) / 2) - 1; i++) {
		txt[i] = tolower(txt[i]);
		txt[strlen(txt) - 1 - i] = tolower(txt[strlen(txt) - 1 - i]);

		if (txt[i] == txt[strlen(txt) - 1 - i])
			continue;
		else
			return 0;
	}
	return 1;
}