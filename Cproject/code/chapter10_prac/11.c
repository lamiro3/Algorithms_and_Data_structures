#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	int pos[10] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };

	printf("��ǰ ��ȣ�� �Է��Ͻÿ�:");
	scanf("%d", &num);

	printf("��ǰ ��ȣ %d�� ��ġ�� %d�Դϴ�.", num , pos[num - 1]);

	return 0;
}