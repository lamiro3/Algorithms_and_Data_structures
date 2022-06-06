#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void) {
	int x, y;
	char option[5];
	printf("연산을 입력하시오:");
	scanf("%s %d %d", option, &x, &y);

	if (strcmp(option, "add") == 0)
		printf("연산의 결과: %d", x + y);

	if (strcmp(option, "sub") == 0)
		printf("연산의 결과: %d", x - y);

	if (strcmp(option, "mul") == 0)
		printf("연산의 결과: %d", x * y);

	if (strcmp(option, "div") == 0)
		printf("연산의 결과: %d", x / y);

	return 0;
}