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
		"안부 메일",
		"abcd@naver.com",
		"efgh@google.com",
		"안녕하세요.",
		"2022/06/07",
		1
	};

	printf("제목: %s\n", ac1.title);
	printf("수신자: %s\n", ac1.sender);
	printf("발신자: %s\n", ac1.receiver);
	printf("내용: %s\n", ac1.content);
	printf("날짜: %s\n", ac1.date);
	printf("우선순위: %d\n", ac1.pri);

	return 0;
}