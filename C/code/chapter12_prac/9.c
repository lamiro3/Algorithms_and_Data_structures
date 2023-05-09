#include <stdio.h>
#include <ctype.h>

void check_first(char* txt);
void check_last(char* txt);

int main(void) {
	char txt[100];
	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets_s(txt, 100); // �� ���� ���ڿ� read
	check_first(txt);
	check_last(txt);

	printf("������ �ؽ�Ʈ:");
	puts(txt); // �� ���� ���ڿ��� print

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
		txt[last_idx + 2] = '\0'; // ���ڿ��� ������ �˷���� ��
	}
}