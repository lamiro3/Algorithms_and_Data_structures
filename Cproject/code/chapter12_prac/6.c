#include <stdio.h>
#include <ctype.h>

void str_upper(char* s);

int main(void) {
	char s[100];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, 100);
	str_upper(s);

	printf("��ȯ�� ���ڿ�: ");
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