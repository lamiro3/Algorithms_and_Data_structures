#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct info
{
	char name[100];
	char hnum[100];
	char pnum[100];
};

int main(void) {
	struct info infos[3];

	for (int i = 0; i < 3; i++) {
		printf("이름을 입력하시오:");
		gets_s(infos[i].name, 100);
		printf("집전화번호를 입력하시오:");
		gets_s(infos[i].hnum, 100);
		printf("휴대폰번호를 입력하시오:");
		gets_s(infos[i].pnum, 100);
	}

	char s_name[100];

	printf("검색할 이름을 입력하시오:");
	gets_s(s_name, 100);

	for (int i = 0; i < 3; i++) {
		if (strcmp(s_name, infos[i].name) == 0) {
			printf("집전화번호: %s\n", infos[i].hnum);
			printf("휴대폰번호: %s\n", infos[i].pnum);
		}
	}

	return 0;
}