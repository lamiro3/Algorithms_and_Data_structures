#include <stdio.h>

int str_chr(char* s, int c);

int main(void) {
	char s[100];
	int c;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, 100);

	printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
	c = getchar();
	
	printf("%c�� ����: %d", c, str_chr(s, c));

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