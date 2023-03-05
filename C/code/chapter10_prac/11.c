#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	int pos[10] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };

	printf("상품 번호를 입력하시오:");
	scanf("%d", &num);

	printf("상품 번호 %d의 위치는 %d입니다.", num , pos[num - 1]);

	return 0;
}