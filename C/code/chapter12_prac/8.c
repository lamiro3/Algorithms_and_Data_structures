#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	char txt[100];
	int cnt = 0;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(txt, 100);

	char* token = strtok(txt, " "); // ó������ �ݵ�� �̷���!

	while (token != NULL) {
		cnt += 1;
		token = strtok(NULL, " "); // �� ��° �̻� ���ʹ� �ݵ�� �̷���!
	}

	printf("�ܾ��� ���� %d�Դϴ�.", cnt);

	return 0;
}