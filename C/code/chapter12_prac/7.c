#include <stdio.h>
#include <ctype.h>
#include <string.h>

int get_response(char* prompt) {
	if ((strcmp(prompt, "yes") == 0) || (strcmp(prompt, "ok") == 0))
		return 1;

	if (strcmp(prompt, "no") == 0)
		return 0;
}

//strcmp �Լ��� �� ���ڿ��� ���� �� 0�� return ��

void to_lower_alpha(char* prompt) {
	for (int i = 0; prompt[i] != '\0'; i++)
		prompt[i] = tolower(prompt[i]);
}

int main(void) {
	char prompt[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(prompt, 100);
	to_lower_alpha(prompt);
	int is_positive = get_response(prompt);
	if (is_positive)
		printf("�������� �亯");
	else
		printf("�������� �亯");

	return 0;
}