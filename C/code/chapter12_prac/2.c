#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void remove_space(char* txt) {
	for (int i = 0; txt[i] != '\0'; i++) {
		if (txt[i] != ' ') {
			printf("%c", txt[i]);
		}
	}
}

int main(void) {
	char txt[100];
	gets_s(txt, 100); //�� �ܾ� �̻��� �Է� ���� ������ �ݵ�� gets_s �Լ� �̿�!
	remove_space(txt);
	return 0;
}