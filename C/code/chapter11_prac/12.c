#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_int(int* px, int* py);

int main(void) {
	int x, y;
	get_int(&x, &y);

	printf("������ ���� %d", x + y);
	return 0;
}

void get_int(int* px, int* py) {
	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", px, py);
}