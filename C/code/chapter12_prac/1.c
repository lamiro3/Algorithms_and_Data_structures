#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char t;
	printf("문자를 입력하시오: ");
	scanf("%c", &t);
	printf("아스키 코드값=%d", t);
	return 0;
}