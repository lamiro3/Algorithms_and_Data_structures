#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_pali(char* txt);

int main(void) {
	char txt[100];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(txt, 100);

	if (is_pali(txt) == 1)
		printf("ȸ���Դϴ�.");
	else
		printf("ȸ���� �ƴմϴ�.");

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