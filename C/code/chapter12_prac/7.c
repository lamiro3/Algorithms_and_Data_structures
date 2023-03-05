#include <stdio.h>
#include <ctype.h>
#include <string.h>

int get_response(char* prompt) {
	if ((strcmp(prompt, "yes") == 0) || (strcmp(prompt, "ok") == 0))
		return 1;

	if (strcmp(prompt, "no") == 0)
		return 0;
}

//strcmp 함수는 두 문자열이 같을 때 0을 return 함

void to_lower_alpha(char* prompt) {
	for (int i = 0; prompt[i] != '\0'; i++)
		prompt[i] = tolower(prompt[i]);
}

int main(void) {
	char prompt[100];
	printf("문자열을 입력하시오: ");
	gets_s(prompt, 100);
	to_lower_alpha(prompt);
	int is_positive = get_response(prompt);
	if (is_positive)
		printf("긍정적인 답변");
	else
		printf("부정적인 답변");

	return 0;
}