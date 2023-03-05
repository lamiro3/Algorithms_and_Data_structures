#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_gcd(int x, int y) {
	if (y == 0)
		return x;
	int d = x % y;
	get_gcd(y, d);
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd) {
	if (x < y) {
		*p_gcd = get_gcd(y, x);
		*p_lcm = x * y / get_gcd(y, x);
	}

	else {
		*p_gcd = get_gcd(x, y);
		*p_lcm = x * y / get_gcd(x, y);
	}
}

int main(void) {
	int lcm, gcd;
	int x, y;

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	get_lcm_gcd(x, y, &lcm, &gcd);

	printf("�ּҰ������ %d�Դϴ�.\n", lcm);
	printf("�ִ������� %d�Դϴ�.\n", gcd);
	
	return 0;
}