#include <stdio.h>

struct account {
	char title[30];
	char sender[50];
	char receiver[50];
	char content[100];
	char date[10];
	int pri;
};

int main(void) {
	struct account ac1 = {
		"�Ⱥ� ����",
		"abcd@naver.com",
		"efgh@google.com",
		"�ȳ��ϼ���.",
		"2022/06/07",
		1
	};

	printf("����: %s\n", ac1.title);
	printf("������: %s\n", ac1.sender);
	printf("�߽���: %s\n", ac1.receiver);
	printf("����: %s\n", ac1.content);
	printf("��¥: %s\n", ac1.date);
	printf("�켱����: %d\n", ac1.pri);

	return 0;
}