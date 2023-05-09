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

	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	get_lcm_gcd(x, y, &lcm, &gcd);

	printf("최소공배수는 %d입니다.\n", lcm);
	printf("최대공약수는 %d입니다.\n", gcd);
	
	return 0;
}