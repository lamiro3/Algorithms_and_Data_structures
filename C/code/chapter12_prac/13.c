#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char txt[100];
	int cnt = 0;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(txt, 100);

	char* dot = strchr(txt, '.');
	char* comma = strchr(txt, ',');

	while ((dot != NULL) || (comma != NULL)) {
		if (dot != NULL) {
			cnt++;
			dot = strchr(dot+1, '.'); // �߸� �κ� ���� ���� �κ� �̾ Ž��
		}
		
		if (comma != NULL) {
			cnt++;
			comma = strchr(comma + 1, ',');
		}
	}

	printf("�������� ������ %d�Դϴ�.", cnt);

	return 0;
}