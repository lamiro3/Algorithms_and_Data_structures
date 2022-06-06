#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char txt[100];
	int cnt = 0;

	printf("문자열을 입력하시오: ");
	gets_s(txt, 100);

	char* dot = strchr(txt, '.');
	char* comma = strchr(txt, ',');

	while ((dot != NULL) || (comma != NULL)) {
		if (dot != NULL) {
			cnt++;
			dot = strchr(dot+1, '.'); // 잘린 부분 경계로 다음 부분 이어서 탐색
		}
		
		if (comma != NULL) {
			cnt++;
			comma = strchr(comma + 1, ',');
		}
	}

	printf("구두점의 개수는 %d입니다.", cnt);

	return 0;
}